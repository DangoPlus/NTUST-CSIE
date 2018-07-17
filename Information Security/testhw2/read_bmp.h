#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

struct Color {
  int R;
  int G;
  int B;
};
const size_t sizey = 512;
const size_t sizex = 512;

bool bmpRead(vector<vector<Color>> &imageVec, const char *fileName) {
  ifstream file(fileName, ios::in | ios::binary);
  if (!file)
    return false;

  // skip header
  const ifstream::off_type headerSize = 54;
  file.seekg(headerSize, ios::beg);
  // read body
  for (size_t y = 0; y != imageVec.size(); ++y) {
    for (size_t x = 0; x != imageVec[0].size(); ++x) {
      char chR, chG, chB;
      file.get(chB).get(chG).get(chR);

      imageVec[y][x].B = chB;
      imageVec[y][x].G = chG;
      imageVec[y][x].R = chR;
    }
  }

  file.close();

  return true;
}

bool bmpWrite(vector<vector<Color>> &imageVec, const char *fileName) {
  const int headerSize = 54;

  char header[headerSize] = {0x42, 0x4d, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
                             40,   0,    0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 1, 0,
                             24,   0,    0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0,
                             0,    0,    0, 0, 0, 0, 0, 0, 0, 0, 0,  0};
  int ysize = imageVec.size();
  int xsize = imageVec[0].size();

  long file_size = (long)ysize * xsize * 3 + 54;
  header[2] = (unsigned char)(file_size & 0x000000ff);
  header[3] = (file_size >> 8) & 0x000000ff;
  header[4] = (file_size >> 16) & 0x000000ff;
  header[5] = (file_size >> 24) & 0x000000ff;

  long width = xsize;
  header[18] = width & 0x000000ff;
  header[19] = (width >> 8) & 0x000000ff;
  header[20] = (width >> 16) & 0x000000ff;
  header[21] = (width >> 24) & 0x000000ff;

  long height = ysize;
  header[22] = height & 0x000000ff;
  header[23] = (height >> 8) & 0x000000ff;
  header[24] = (height >> 16) & 0x000000ff;
  header[25] = (height >> 24) & 0x000000ff;
  ofstream file(fileName, ios::out | ios::binary);
  if (!file)
    return false;

  // write header
  file.write(header, headerSize);
  // write body
  for (size_t y = 0; y != imageVec.size(); ++y) {
    for (size_t x = 0; x != imageVec[0].size(); ++x) {
      char chB = imageVec[y][x].B;
      char chG = imageVec[y][x].G;
      char chR = imageVec[y][x].R;

      file.put(chB).put(chG).put(chR);
    }
  }
  file.close();
  return true;
}
