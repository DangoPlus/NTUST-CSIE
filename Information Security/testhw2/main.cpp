#include "des_encryption.h"
#include "read_bmp.h"
#include "rgb_continuously.h"
#include "rgb_separately.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

clock_t start, finish;

static bool *createKey() {
  bool *key = new bool[64];
  for (int i = 0; i < 8; i++) {
    key[i * 8 + 0] = 1;
    key[i * 8 + 1] = 0;
    key[i * 8 + 2] = 1;
    key[i * 8 + 3] = 0;
    key[i * 8 + 4] = 1;
    key[i * 8 + 5] = 0;
    key[i * 8 + 6] = 1;
    key[i * 8 + 7] = 1;
  }
  return key;
}

void rgb_continuously() {
  start = clock();
  ebc(createKey());
  finish = clock();
  cout << setw(30) << "ebc() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ebc_decrypt(createKey());
  finish = clock();
  cout << setw(30) << "ebc_decrypt() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  cbc(createKey());
  finish = clock();
  cout << setw(30) << "cbc() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  cbc_decrypt(createKey());
  finish = clock();
  cout << setw(30) << "cbc_decrypt() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ofb(createKey());
  finish = clock();
  cout << setw(30) << "ofb() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ofb_decrypt(createKey());
  finish = clock();
  cout << setw(30) << "ofb_decrypt() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ctr(createKey());
  finish = clock();
  cout << setw(30) << "ctr() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ctr_decrypt(createKey());
  finish = clock();
  cout << setw(30) << "ctr_decrypt() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
}

void rgb_separately() {
  start = clock();
  ebc_sep(createKey());
  finish = clock();
  cout << setw(30) << "ebc_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ebc_decrypt_sep(createKey());
  finish = clock();
  cout << setw(30) << "ebc_decrypt_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  cbc_sep(createKey());
  finish = clock();
  cout << setw(30) << "cbc_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  cbc_decrypt_sep(createKey());
  finish = clock();
  cout << setw(30) << "cbc_decrypt_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ofb_sep(createKey());
  finish = clock();
  cout << setw(30) << "ofb_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ofb_decrypt_sep(createKey());
  finish = clock();
  cout << setw(30) << "ofb_decrypt_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
}

void sep_ctr_and_ctr_decrypt() {
  start = clock();
  ctr_sep(createKey());
  finish = clock();
  cout << setw(30) << "ctr_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
  start = clock();
  ctr_decrypt_sep(createKey());
  finish = clock();
  cout << setw(30) << "ctr_decrypt_sep() time: " << setw(15)
       << (double)(finish - start) / CLOCKS_PER_SEC << " secs." << endl;
}

int main() {
  // key 已经写在上面的function 中
  // IV 写在 des_encryption.h 中

  cout << "RGB stored continuously :" << endl;
  rgb_continuously();

  cout << "\nRGB stored separately :" << endl;
  rgb_separately();

  std::thread t(sep_ctr_and_ctr_decrypt);
  t.join();

  return 0;
}
