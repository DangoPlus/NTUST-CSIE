#include "DES.cpp"
#include <windows.h>

using namespace std;

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned long   DWORD;
typedef long            LONG;
struct RGBDATA
{
    BYTE rgbtRed;
    BYTE rgbtGreen;
    BYTE rgbtBlue;
};



void main()
{
    fstream file,f_out;
    string s = "1010110110101101101011011010110110101101101011011010110110101101";
    string s1 ="1010101010001101001000110111100101011001111011111100101000001101";
    BITMAPFILEHEADER FileHeader;
    BITMAPINFOHEADER   InfoHeader;
    RGBTRIPLE color[512][512];
    int ImageX, ImageY;
    bitset<8> B1;
    bitset<8> B2;
    bitset<8> B3;
    bitset<8> B4;
    bitset<8> B5;
    bitset<8> B6;
    bitset<8> B7;
    bitset<8> B8;
    bitset<64> P;
    bitset<64> key(s);
    bitset<64> IV(s1);



    BYTE   ByteBuf;
    int fix;
    int i, j, n;

    file.open("test.bmp", ios::in|ios::binary);
    f_out.open("CBC_out1.bmp", ios::out|ios::binary);

    file.read((char*)&FileHeader, sizeof(BITMAPFILEHEADER));
    file.read((char*)&InfoHeader, sizeof(BITMAPINFOHEADER));

    f_out.write ((char*)&FileHeader, sizeof(BITMAPFILEHEADER));
    f_out.write ((char*)&InfoHeader, sizeof(BITMAPINFOHEADER));


    ImageX = InfoHeader.biWidth;
    ImageY = InfoHeader.biHeight;

    if( (ImageX*3)%4 != 0)
        fix = 4 - ((ImageX*3)%4);
    else
        fix = 0;

    RGBDATA rgb;

    for( i=ImageY-1; i>=0; i-- )
    {
        for( j=0; j<ImageX; j++ )
        {

            file.read((char*)&rgb, sizeof(RGBTRIPLE));
            color[j][i].rgbtBlue = rgb.rgbtBlue;
            color[j][i].rgbtGreen = rgb.rgbtGreen;
            color[j][i].rgbtRed = rgb.rgbtRed;
        }
        for( n=0; n<fix; n++ )
        {
            file.read((char*)&ByteBuf, sizeof(BYTE));
        }
    }


    cout << "Encrypt start" << endl;


    for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtBlue;
            B2 = color[j-1][i].rgbtBlue;
            B3 = color[j-2][i].rgbtBlue;
            B4 = color[j-3][i].rgbtBlue;
            B5 = color[j-4][i].rgbtBlue;
            B6 = color[j-5][i].rgbtBlue;
            B7 = color[j-6][i].rgbtBlue;
            B8 = color[j-7][i].rgbtBlue;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            P = P^IV;
            P = encrypt(P,key);
            IV = P;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtBlue = (char)B1.to_ulong();
            color[j-1][i].rgbtBlue = (char)B2.to_ulong();
            color[j-2][i].rgbtBlue = (char)B3.to_ulong();
            color[j-3][i].rgbtBlue = (char)B4.to_ulong();
            color[j-4][i].rgbtBlue = (char)B5.to_ulong();
            color[j-5][i].rgbtBlue = (char)B6.to_ulong();
            color[j-6][i].rgbtBlue = (char)B7.to_ulong();
            color[j-7][i].rgbtBlue = (char)B8.to_ulong();
        }

    }

for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtRed;
            B2 = color[j-1][i].rgbtRed;
            B3 = color[j-2][i].rgbtRed;
            B4 = color[j-3][i].rgbtRed;
            B5 = color[j-4][i].rgbtRed;
            B6 = color[j-5][i].rgbtRed;
            B7 = color[j-6][i].rgbtRed;
            B8 = color[j-7][i].rgbtRed;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            P = P^IV;
            P = encrypt(P,key);
            IV = P;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtRed = (char)B1.to_ulong();
            color[j-1][i].rgbtRed = (char)B2.to_ulong();
            color[j-2][i].rgbtRed = (char)B3.to_ulong();
            color[j-3][i].rgbtRed = (char)B4.to_ulong();
            color[j-4][i].rgbtRed = (char)B5.to_ulong();
            color[j-5][i].rgbtRed = (char)B6.to_ulong();
            color[j-6][i].rgbtRed = (char)B7.to_ulong();
            color[j-7][i].rgbtRed = (char)B8.to_ulong();
        }

    }


for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtGreen;
            B2 = color[j-1][i].rgbtGreen;
            B3 = color[j-2][i].rgbtGreen;
            B4 = color[j-3][i].rgbtGreen;
            B5 = color[j-4][i].rgbtGreen;
            B6 = color[j-5][i].rgbtGreen;
            B7 = color[j-6][i].rgbtGreen;
            B8 = color[j-7][i].rgbtGreen;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            P = P^IV;
            P = encrypt(P,key);
            IV = P;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtGreen = (char)B1.to_ulong();
            color[j-1][i].rgbtGreen = (char)B2.to_ulong();
            color[j-2][i].rgbtGreen = (char)B3.to_ulong();
            color[j-3][i].rgbtGreen = (char)B4.to_ulong();
            color[j-4][i].rgbtGreen = (char)B5.to_ulong();
            color[j-5][i].rgbtGreen = (char)B6.to_ulong();
            color[j-6][i].rgbtGreen = (char)B7.to_ulong();
            color[j-7][i].rgbtGreen = (char)B8.to_ulong();
        }

    }


    for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>= 0 ; j-- )
        {

            rgb.rgbtBlue = color[j][i].rgbtBlue;
            rgb.rgbtGreen = color[j][i].rgbtGreen;
            rgb.rgbtRed = color[j][i].rgbtRed;
            f_out.write((char*)&rgb,sizeof(RGBTRIPLE));
        }

        for( n=0; n<fix; n++ )
        {
            f_out.write((char*)&ByteBuf,sizeof(ByteBuf));
        }
    }
    file.close();
    f_out.close();

    cout << "Encrypt end" << endl;

    //----------------------encrypt----------------------------
    //----------------------decrypt----------------------------
    cout << "Decrypt start" << endl;
    file.open("CBC_out1.bmp", ios::in|ios::binary);
    f_out.open("CBC_out2.bmp", ios::out|ios::binary);

    file.read((char*)&FileHeader, sizeof(BITMAPFILEHEADER));
    file.read((char*)&InfoHeader, sizeof(BITMAPINFOHEADER));

    f_out.write ((char*)&FileHeader, sizeof(BITMAPFILEHEADER));
    f_out.write ((char*)&InfoHeader, sizeof(BITMAPINFOHEADER));


    bitset<64> IV1(s1);
    bitset<64> C;




    for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtBlue;
            B2 = color[j-1][i].rgbtBlue;
            B3 = color[j-2][i].rgbtBlue;
            B4 = color[j-3][i].rgbtBlue;
            B5 = color[j-4][i].rgbtBlue;
            B6 = color[j-5][i].rgbtBlue;
            B7 = color[j-6][i].rgbtBlue;
            B8 = color[j-7][i].rgbtBlue;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            C = P;
            P = decrypt(P);
            P = P^IV1;
            IV1 = C;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtBlue = (char)B1.to_ulong();
            color[j-1][i].rgbtBlue = (char)B2.to_ulong();
            color[j-2][i].rgbtBlue = (char)B3.to_ulong();
            color[j-3][i].rgbtBlue = (char)B4.to_ulong();
            color[j-4][i].rgbtBlue = (char)B5.to_ulong();
            color[j-5][i].rgbtBlue = (char)B6.to_ulong();
            color[j-6][i].rgbtBlue = (char)B7.to_ulong();
            color[j-7][i].rgbtBlue = (char)B8.to_ulong();
        }

    }

for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtRed;
            B2 = color[j-1][i].rgbtRed;
            B3 = color[j-2][i].rgbtRed;
            B4 = color[j-3][i].rgbtRed;
            B5 = color[j-4][i].rgbtRed;
            B6 = color[j-5][i].rgbtRed;
            B7 = color[j-6][i].rgbtRed;
            B8 = color[j-7][i].rgbtRed;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            C = P;
            P = decrypt(P);
            P = P^IV1;
            IV1 = C;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtRed = (char)B1.to_ulong();
            color[j-1][i].rgbtRed = (char)B2.to_ulong();
            color[j-2][i].rgbtRed = (char)B3.to_ulong();
            color[j-3][i].rgbtRed = (char)B4.to_ulong();
            color[j-4][i].rgbtRed = (char)B5.to_ulong();
            color[j-5][i].rgbtRed = (char)B6.to_ulong();
            color[j-6][i].rgbtRed = (char)B7.to_ulong();
            color[j-7][i].rgbtRed = (char)B8.to_ulong();
        }

    }


for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>0 ; j-=8 )
        {
            B1 = color[j][i].rgbtGreen;
            B2 = color[j-1][i].rgbtGreen;
            B3 = color[j-2][i].rgbtGreen;
            B4 = color[j-3][i].rgbtGreen;
            B5 = color[j-4][i].rgbtGreen;
            B6 = color[j-5][i].rgbtGreen;
            B7 = color[j-6][i].rgbtGreen;
            B8 = color[j-7][i].rgbtGreen;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    P[k]=B1[k];
                    break;
                case 1:
                    P[k]=B2[k-8];
                    break;
                case 2:
                    P[k]=B3[k-16];
                    break;
                case 3:
                    P[k]=B4[k-24];
                    break;
                case 4:
                    P[k]=B5[k-32];
                    break;
                case 5:
                    P[k]=B6[k-40];
                    break;
                case 6:
                    P[k]=B7[k-48];
                    break;
                case 7:
                    P[k]=B8[k-56];
                    break;
                }
            }
            C = P;
            P = decrypt(P);
            P = P^IV1;
            IV1 = C;
            for(int k=0; k<64; k++)
            {
                switch (k/8)
                {
                case 0:
                    B1[k] = P[k];
                    break;
                case 1:
                    B2[k-8]=P[k];
                    break;
                case 2:
                    B3[k-16]=P[k];
                    break;
                case 3:
                    B4[k-24]=P[k];
                    break;
                case 4:
                    B5[k-32]=P[k];
                    break;
                case 5:
                    B6[k-40]=P[k];
                    break;
                case 6:
                    B7[k-48]=P[k];
                    break;
                case 7:
                    B8[k-56]=P[k];
                    break;
                }
            }
            color[j][i].rgbtGreen = (char)B1.to_ulong();
            color[j-1][i].rgbtGreen = (char)B2.to_ulong();
            color[j-2][i].rgbtGreen = (char)B3.to_ulong();
            color[j-3][i].rgbtGreen = (char)B4.to_ulong();
            color[j-4][i].rgbtGreen = (char)B5.to_ulong();
            color[j-5][i].rgbtGreen = (char)B6.to_ulong();
            color[j-6][i].rgbtGreen = (char)B7.to_ulong();
            color[j-7][i].rgbtGreen = (char)B8.to_ulong();
        }

    }


    for( i=ImageY-1; i>=0; i-- )
    {
        for( j=ImageX-1; j>= 0 ; j-- )
        {

            rgb.rgbtBlue = color[j][i].rgbtBlue;
            rgb.rgbtGreen = color[j][i].rgbtGreen;
            rgb.rgbtRed = color[j][i].rgbtRed;
            f_out.write((char*)&rgb,sizeof(RGBTRIPLE));
        }

        for( n=0; n<fix; n++ )
        {
            f_out.write((char*)&ByteBuf,sizeof(ByteBuf));
        }
    }

    cout << "Decrypt end" << endl;


    file.close();
    f_out.close();
}
