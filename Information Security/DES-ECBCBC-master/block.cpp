/*
Taneli Leppanen
taneli.leppanen@student.tut.fi
BIE-BEZ Security

Lab 3 - Block ciphers and modes of operation, implementation in OpenSSL
*/


#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <openssl/evp.h>
#include <openssl/err.h>
#include <openssl/applink.c>


using namespace std;


void block_cipher(string fileNameIn, string mode, int enc) {
	
	string func;

	if (enc == 1) {
		func = "encrypt";
	}
	else {
		func = "decrypt";
	}
	
	cout << "Target file: " << fileNameIn << "\nMode: " << mode << " " << func << "\n\n";


	unsigned char header[1024];

	// Open source file and check if it exists
	ifstream fin(fileNameIn, ios::binary);

	if (!fin) {
		cout << "Error opening file \"" << fileNameIn << "\"" << endl;
		cin.get();
		exit(EXIT_FAILURE);
	}

	fin.read((char *)header, 10);
	string fileNameOff;
	// Open or create empty target file
	if (enc == 0) {
		fileNameOff = fileNameIn.substr(0, fileNameIn.length() - 4) + "_dec.bmp";
	}
	else {
		fileNameOff = fileNameIn.substr(0, fileNameIn.length() - 4) + "_" + mode + ".bmp";
	}
	
	ofstream fof;
	fof.open(fileNameOff, ofstream::out | ofstream::trunc | ofstream::binary);

	if (!fof) {
		cout << "Error opening file \"" << fileNameOff << "\"" << endl;
		fin.close();
		cin.get();
		exit(EXIT_FAILURE);
	}
	
	fof.write((const char*)&header[0], 10);
	int start;
	fin.read((char *)&start, 4);

	if (start < 54 || start > 1024 -54) {
		cout << "Header out of range: 54 < header < 1010 bytes" << endl;
		fin.close();
		fof.close();
		cin.get();
		exit(EXIT_FAILURE);
	}

	fof.write(reinterpret_cast<const char *>(&start), sizeof(start));
	fin.read((char *)header, start - 14);
	fof.write((const char*)&header[0], start - 14);


	// Initialization of cipher
	unsigned char inBuffer[1024]; // Plaintext buffer
	unsigned char outBuffer[1024 + EVP_MAX_BLOCK_LENGTH]; // Ciphertext buffer
	unsigned char key[EVP_MAX_KEY_LENGTH] = "Very good key";  // encryption and decryption key
	unsigned char iv[EVP_MAX_IV_LENGTH] = "moro juuso";  // initialization vector
	const char cipherName[] = "";
	const EVP_CIPHER * cipher;


	int outLength = 0;
	int res;

	res = CRYPTO_malloc_init();
	if (res != 1) {
		cout << "Crypto malloc failure" << endl;
		fin.close();
		fof.close();
		ERR_print_errors_fp(stderr);
		cin.get();
		exit(2);
	}

	OpenSSL_add_all_ciphers();
	/* ciphers and hashes could be loaded using OpenSSL_add_all_algorithms() */
	
	// Setting the cipher
	if (mode == "ecb") {
		cipher = EVP_des_ecb();
	}
	else {
		cipher = EVP_des_cbc();
	}

	// Context structure
	EVP_CIPHER_CTX *ctx;
	ctx = EVP_CIPHER_CTX_new();
	if (ctx == NULL) {
		cout << "Context structure failure" << endl;
		fin.close();
		fof.close();
		cin.get();
		exit(2);
	}

	// Context init for operation
	res = EVP_CipherInit_ex(ctx, cipher, NULL, key, iv, enc);
	if (res != 1) {
		cout << "Context initialization failure" << endl;
		fin.close();
		fof.close();
		cin.get();
		exit(3);
	}

	// Reading the file in blocks to inBuffer and calling CipherUpdate
	while (true) {
		fin.read((char *)inBuffer, sizeof(inBuffer));
		streamsize inLength = fin.gcount();
		
		// EOF reached
		if (inLength == 0) {
			break;
		}
		
		res = EVP_CipherUpdate(ctx, outBuffer, &outLength, inBuffer, inLength);  // Encryption of outBuffer
		//cout << "In:  " << inLength << endl;
		//cout << "Out: " << outLength << endl;
		
		if (res != 1) {
			cout << "CipherUpdate failed" << endl;
			fin.close();
			fof.close();
			cin.get();
			exit(4);
		}
		
		// Write outBuffer to target file
		fof.write((const char*)&outBuffer[0], outLength);
	}

	// Finalization
	res = EVP_CipherFinal(ctx, outBuffer, &outLength);

	if (res != 1) {
		cout << "Finalization error" << endl;
		fin.close();
		fof.close();
		ERR_print_errors_fp(stderr);
		cin.get();
		exit(5);
	}

	// Final write to target file
	fof.write((const char*)&outBuffer[0], outLength);

	/* Clean up */
	EVP_CIPHER_CTX_free(ctx);

	fin.close();
	fof.close();

	cout << "Run complete, files closed" << endl;
	cin.get();
	return;
}