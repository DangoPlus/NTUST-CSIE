/*
Taneli Leppanen
taneli.leppanen@student.tut.fi
BIE-BEZ Security

Lab 3 - Block ciphers and modes of operation, implementation in OpenSSL
*/


#include "block.h"
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

/*
1) Target file
2) Mode: ecb or cbc
3) Encrypt (e) or decrypt (d)
*/

void main(int argc, char *argv[]) {

	if (argc != 4) {
		cout << "Wrong number of arguments" << endl;
		exit(EXIT_FAILURE);
		cin.get();
	}
	
	string fileNameIn = argv[1];
	string mode = argv[2];
	transform(mode.begin(), mode.end(), mode.begin(), ::tolower);
	string enc_str = argv[3];
	transform(enc_str.begin(), enc_str.end(), enc_str.begin(), ::tolower);
	int enc;

	if (fileNameIn.substr(fileNameIn.length() - 4, 4) != ".bmp") {
		cout << "Only .bmp is supported" << endl;
		exit(EXIT_FAILURE);
		cin.get();
	}
	
	if (mode != "ecb" && mode != "cbc") {
		
		cout << "Unrecognized mode: " << mode << endl;
		cin.get();
		exit(EXIT_FAILURE);
	}

	if (enc_str == "e") {
		enc = 1;
	}
	else if (enc_str == "d") {
		enc = 0;
	}
	else {
		cout << "Unrecognized operation: " << enc_str << endl;
		exit(EXIT_FAILURE);
		cin.get();
	}

	block_cipher(fileNameIn, mode, enc);
}