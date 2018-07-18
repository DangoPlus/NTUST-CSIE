#include <iostream>  
#include <fstream>  
#include <windows.h>  

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned long   DWORD;
typedef long            LONG;

//#define MAXPIX 512  

using namespace std;


struct RGBDATA {
	BYTE rgbtRed;
	BYTE rgbtGreen;
	BYTE rgbtBlue;
};

void main() {

	BITMAPFILEHEADER FileHeader;
	BITMAPINFOHEADER   InfoHeader;
	RGBTRIPLE color[345][300];
	int ImageX, ImageY;

	BYTE   ByteBuf;
	int fix;
	int i, j, n;
	FILE *fp;
	FILE *out;
	char filename[20];

	/* 開啟檔案 */
	scanf("%s", filename);
	fp = fopen(filename, "rb");
	out = fopen("out.bmp", "wb");

	/* 先讀取檔頭資訊 */
	fread(&FileHeader, sizeof(BITMAPFILEHEADER), 1, fp);
	fread(&InfoHeader, sizeof(BITMAPINFOHEADER), 1, fp);

	fwrite(&FileHeader, 1, sizeof(BITMAPFILEHEADER), out);
	fwrite(&InfoHeader, 1, sizeof(BITMAPINFOHEADER), out);

	/* 確定格式 */
	if (FileHeader.bfType != 'MB')
		return;
	if (InfoHeader.biCompression != 0)
		return;
	if (InfoHeader.biBitCount != 24)
		return;

	/* 取得圖寬及圖高 */
	ImageX = InfoHeader.biWidth;
	ImageY = InfoHeader.biHeight;

	printf("ImageX:%d\n", ImageX);
	printf("ImageY:%d\n", ImageY);

	/* 計算每列需略過的 bytes 數 */
	if ((ImageX * 3) % 4 != 0)
		fix = 4 - ((ImageX * 3) % 4);
	else
		fix = 0;

	/* 圖入各像素資訊 */
	RGBDATA rgb;

	for (i = ImageY - 1; i >= 0; i--)
	{
		for (j = 0; j<ImageX; j++)
		{

			fread(&rgb, sizeof(RGBTRIPLE), 1, fp);
			color[j][i].rgbtBlue = rgb.rgbtBlue;
			color[j][i].rgbtGreen = rgb.rgbtGreen;
			color[j][i].rgbtRed = rgb.rgbtRed;
		}
		/* 略過各列多餘的資訊 */
		for (n = 0; n<fix; n++) {
			fread(&ByteBuf, sizeof(BYTE), 1, fp);
			//fwrite(&ByteBuf , 1 , sizeof(ByteBuf) , out);  
		}
	}

	for (i = ImageY - 1; i >= 0; i--)
	{
		for (j = ImageX - 1; j >= 0; j--)
		{

			rgb.rgbtBlue = color[j][i].rgbtBlue;
			rgb.rgbtGreen = color[j][i].rgbtGreen;
			rgb.rgbtRed = color[j][i].rgbtRed;
			fwrite(&rgb, 1, sizeof(RGBTRIPLE), out);
		}
		/* 略過各列多餘的資訊 */
		for (n = 0; n<fix; n++) {
			fwrite(&ByteBuf, 1, sizeof(ByteBuf), out);
		}
	}
	fclose(fp);
	fclose(out);

	system("pause");
}