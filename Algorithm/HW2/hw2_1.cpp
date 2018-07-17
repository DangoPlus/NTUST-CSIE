#include <iostream>
#include <string.h>
#define MAX 1001
using namespace std;

char str[MAX] = "";
int store_ans[1000][1000];
int store_ins[1000][1000];
int find;
//void PrintLPS;
//void LPS;
 
 int main(){
	int i = 1;
	int times = 0;
	scanf("%d", &times); 
	while(i <= times){
	scanf("%s",str);
	LPS();
	i++;
	}
}
 
int find(int i, int j)
{
	if (i == j) return 1;
	if (i > j) return 0;
	if (store_ans[i][j] != -1) return store_ans[i][j];
	if (str[i] == str[j])
		store_ans[i][j] = find(i+1, j-1) + 2, store_ins[i][j] = 0;
	else if (find(i+1, j) > find(i, j-1))
		store_ans[i][j] = find(i+1, j), store_ins[i][j] = 1;
	else if (find(i+1, j) < find(i, j-1))
		store_ans[i][j] = find(i, j-1), store_ins[i][j] = 2;
	else 
		store_ans[i][j] = find(i, j-1), store_ins[i][j] = 3;
	return store_ans[i][j];
}
 
void PrintLPS(int i, int j)
{
	if (i > j) return;
	if (i == j)
		cout << str[i];
	else if (store_ins[i][j] == 0)
		cout << str[i], PrintLPS(i+1, j-1), cout << str[i];
	else if (store_ins[i][j] == 1)
		PrintLPS(i+1, j);
	else
		PrintLPS(i, j-1);
}
 
void LPS()
{
	memset(store_ans, -1, sizeof(store_ans));
	int N = strlen(str);
	printf("%d\n",find(0, N-1));
	PrintLPS(0, N-1);
	printf("\n");
}


