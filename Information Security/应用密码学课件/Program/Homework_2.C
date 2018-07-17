/*
   第二次作业，测试整数和实数矩阵的幂的溢出情况

         N为矩阵维数；
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/timeb.h>

#define N 4
#define NN (N*N)


//========================================================================================================
//                                                 全局变量及函数
//========================================================================================================

// 输出文件
FILE *fp;

//=============================================

void mNxN_out_Z(m) // 输出N*N无符号整数矩阵m
unsigned m[N][N];
{ unsigned i,j;

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
	{
		printf(" %10u",m[i][j]);
		fprintf(fp," %10u",m[i][j]);
	}
    putchar('\n');
    putc('\n',fp);
  }
  putchar('\n');
  putc('\n',fp);
}

//=============================================

void mNxN_out_R(m) // 输出N*N实数矩阵m
float m[N][N];
{ unsigned i,j;

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
	{
		printf(" %18.6f",m[i][j]);
		fprintf(fp," %18.6f",m[i][j]);
	}
    putchar('\n');
    putc('\n',fp);
  }
  putchar('\n');
  putc('\n',fp);
}

//=============================================

void mNxN_copy_Z(m,M) // N*N无符号整数矩阵拷贝，m -> M
unsigned m[NN],M[NN];
{ unsigned i;

  for(i=0;i<NN;i++) M[i]=m[i]; // 采用一维表示，可减少计算坐标开销
}

//=============================================

void mNxN_copy_R(m,M) // N*N实数矩阵拷贝，m -> M
float m[NN],M[NN];
{ unsigned i;

  for(i=0;i<NN;i++) M[i]=m[i]; // 采用一维表示，可减少计算坐标开销
}

//=============================================

void mNxN_mul_Z(a,b,v)  // N*N无符号整数矩阵相乘，v <- a*b
unsigned a[N][N],b[N][N],v[N][N];
{ unsigned i,j,k;  unsigned c[N][N];
  
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
		  for(k=c[i][j]=0;k<N;k++) c[i][j] += a[i][k]*b[k][j];

  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) v[i][j] = c[i][j];
}

//=============================================

void mNxN_mul_R(a,b,v)  // N*N实数矩阵相乘，v <- a*b
float a[N][N],b[N][N],v[N][N];
{ unsigned i,j,k;  float c[N][N];
  
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
		  for(k=c[i][j]=0;k<N;k++) c[i][j] += a[i][k]*b[k][j];

  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) v[i][j] = c[i][j];
}

//=============================================

void main()
{ unsigned Mz[N][N],zM[N][N];
  float Mr[N][N],rM[N][N];
  unsigned i,j;

  if((fp=fopen(".\\Homework_2.txt","a"))==NULL)
  {
	  puts("Can create file: Homework_2.txt");
	  exit(0);
  }

  printf("\n随机寻找 %u*%u 无符号整数矩阵 Mz.\n\n",N,N);
  fprintf(fp,"\n随机寻找 %u*%u 无符号整数矩阵 Mz.\n\n",N,N);
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) Mz[i][j] = rand();
  puts("Mz =");
  fputs("Mz =\n",fp);
  mNxN_out_Z(Mz);
  getch();
  i=1;
  mNxN_copy_Z(Mz,zM);

Re_try_Z:

  mNxN_mul_Z(Mz,zM,Mz);
  i++;
  printf("\n====================================\nMz^%u =\n",i);
  fprintf(fp,"\n====================================\nMz^%u =\n",i);
  mNxN_out_Z(Mz);
  if(getch() != 27) goto Re_try_Z;

  printf("\n随机寻找 %u*%u 实数矩阵 Mr.\n\n",N,N);
  fprintf(fp,"\n随机寻找 %u*%u 实数矩阵 Mr.\n\n",N,N);
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) Mr[i][j] = rand()/100.0;
  puts("Mr =");
  fputs("Mr =\n",fp);
  mNxN_out_R(Mr);
  getch();
  i=1;
  mNxN_copy_R(Mr,rM);

Re_try_R:

  mNxN_mul_R(Mr,rM,Mr);
  i++;
  printf("\n====================================\nMr^%u =\n",i);
  fprintf(fp,"\n====================================\nMr^%u =\n",i);
  mNxN_out_R(Mr);
  if(getch() != 27) goto Re_try_R;

  fclose(fp);
}

//=============================================
