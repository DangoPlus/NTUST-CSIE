/*
   第一次作业，求Ｚm上的N*N矩阵的逆矩阵（m<=256）

         N为矩阵维数；
         E_FORMAT为矩阵元素的输出格式。
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/timeb.h>

#define N 2
#define MOD 26
#define NN (N*N)

#if MOD<10

	#define E_FORMAT " %u"

#elif MOD<100

	#define E_FORMAT " %02u"

#else

	#define E_FORMAT " %03u"

#endif


//========================================================================================================
//                                                 全局变量及函数
//========================================================================================================

// 输出文件
FILE *fp;

// 乘法逆元表R，R[i]==0表示i不可逆，否则R[i]为i的乘法逆元。
unsigned char R[MOD];

//=============================================

void mNxN_out(m) // 输出N*N矩阵m
unsigned char m[N][N];
{ unsigned i,j;

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
	{
		printf(E_FORMAT,m[i][j]);
		fprintf(fp,E_FORMAT,m[i][j]);
	}
    putchar('\n');
    putc('\n',fp);
  }
  putchar('\n');
  putc('\n',fp);
}

//=============================================

void mNxN_copy(m,M) // N*N矩阵拷贝，m -> M
unsigned char m[NN],M[NN];
{ unsigned i;

  for(i=0;i<NN;i++) M[i]=m[i]; // 采用一维表示，可减少计算坐标开销
}

//=============================================

void mNxN_mul(a,b,v)  // N*N 矩阵相乘，v <- a*b
unsigned char a[N][N],b[N][N],v[N][N];
{ unsigned i,j,k;  unsigned char c[N][N];
  
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
		  for(k=c[i][j]=0;k<N;k++) c[i][j] = (c[i][j]+a[i][k]*b[k][j])%MOD;

  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) v[i][j] = c[i][j];
}

//=============================================

int mNxN_reverse(M,rM) // 用初等行变换求N*N矩阵M的逆矩阵rM，并返回M的秩。
unsigned char M[N][N],rM[N][N];
{ unsigned char t,m[N][N];
  unsigned i,j,k,rk;

  mNxN_copy(M,m);

  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) rM[i][j] = (i==j ? 1 : 0); // 置rM为单位阵

  for(rk=j=0;j<N;j++)
  {
	  i=rk;
	  while(i<N && R[m[i][j]]==0) i++;

	  if(i==N) continue; // 检查下一列
		  
	  if(i!=rk) // 交换rk和i两行
		  for(k=0;k<N;k++)
		  { 
			  t=m[rk][k];
			  m[rk][k]=m[i][k];
			  m[i][k]=t;

			  t=rM[rk][k];
			  rM[rk][k]=rM[i][k];
			  rM[i][k]=t;
		  }

	  if(m[rk][j]!=1) // 用M[rk][j]的乘法逆元乘第rk行，将主元M[rk][j]置为1
		  for(t=R[m[rk][j]],k=0;k<N;k++)
		  {
			  m[rk][k] = (m[rk][k]*t)%MOD;
			  rM[rk][k] = (rM[rk][k]*t)%MOD;
		  }
			  
	  for(i=0;i<N;i++)  // 将第j列除第rk行之外清零
          if(i!=rk && m[i][j])
			  for(t=MOD-m[i][j],k=0;k<N;k++)
			  {
				  m[i][k] = (m[i][k]+m[rk][k]*t)%MOD;
				  rM[i][k] = (rM[i][k]+rM[rk][k]*t)%MOD;
			  }

	  rk++;
  }

  return(rk);
}

//=============================================

void main()
{ unsigned char M[N][N],rM[N][N],T[N][N];
  unsigned i,j,rk;

  R[0]=0; R[1]=1;
  for(i=2;i<MOD;i++) // 生成R表，考虑到不同的MOD，所以对i,j取步长1
	  for(R[i]=0,j=2;j<MOD;j++)
		  if((i*j)%MOD==1)
		  {
			  R[i]=j;
			  break;
		  }

  for(i=0;i<MOD;i++) printf("R[%u] = %u\n",i,R[i]);
  getch();

  if((fp=fopen(".\\Homework_1.txt","a"))==NULL)
  {
	  puts("Can create file: Homework_1.txt");
	  exit(0);
  }

Re_try:

  printf("\n随机寻找 Ｚ%u 上的 %u*%u 矩阵 M.\n",MOD,N,N);
  fprintf(fp,"\n随机寻找 Ｚ%u 上的 %u*%u 矩阵 M.\n",MOD,N,N);
  for(i=0;i<N;i++)
	  for(j=0;j<N;j++) M[i][j] = rand()%MOD;
  puts("M =");
  fputs("M =\n",fp);
  mNxN_out(M);

  printf("\n判断 M 是否可逆，如可逆求出其逆阵rM.\n");
  fprintf(fp,"\n判断 M 是否可逆，如可逆求出其逆阵rM.\n");
  rk=mNxN_reverse(M,rM);
  if(rk==N)
  {
	printf("\7\nM 可逆，其逆阵：\nrM =\n");
	fprintf(fp,"\nM 可逆，其逆阵：\nrM =\n");
	mNxN_out(rM);

	mNxN_mul(M,rM,T);
	puts("M*rM =");
	fputs("M*rM =\n",fp);
	mNxN_out(T);

	mNxN_mul(rM,M,T);
	puts("rM*M =");
	fputs("rM*M =\n",fp);
	mNxN_out(T);
  }
  else
  {
	printf("\nM 不可逆，其秩 = %u\n",rk);
	fprintf(fp,"\nM 不可逆，其秩 = %u\n",rk);
  }

  puts("======================================");
  fputs("======================================",fp);
  if(getch() != 27) goto Re_try;
  fclose(fp);
}

//=============================================
