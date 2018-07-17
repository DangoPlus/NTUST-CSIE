#include <iostream>
#include <string.h>
using namespace std;

    char s[1000+1];     
    int dp[1000][1000]; 
    int p[1000][1000]; 
       

     
    int f(int i, int j)
    {
        if (i == j) return 1;
        if (i > j) return 0;
        if (dp[i][j] != -1) return dp[i][j];
     
 
        if (s[i] == s[j])
            dp[i][j] = f(i+1, j-1) + 2, p[i][j] = 0;
     
      
        else if (f(i+1, j) > f(i, j-1))
            dp[i][j] = f(i+1, j), p[i][j] = 1;
     
       
        else if (f(i+1, j) < f(i, j-1))
            dp[i][j] = f(i, j-1), p[i][j] = 2;
     
        
        else
            dp[i][j] = f(i, j-1), p[i][j] = 3;
     
        return dp[i][j];
    }
     
    void print(int i, int j)
    {
        if (i > j) return;
     
        
        if (i == j)
            cout << s[i];
     
        
        else if (p[i][j] == 0)
            cout << s[i], print(i+1, j-1), cout << s[i];
     
        
        else if (p[i][j] == 1)
            print(i+1, j);
     
        
        else
            print(i, j-1);
    }
     
    void longest_palindromic_subsequence()
    {
        memset(dp, -1, sizeof(dp));
     
        int N = strlen(s);
       
        printf("%d\n",f(0, N-1));
        
        print(0, N-1);
        printf("\n");
    }
   int main(){
   	int i = 1;
   	int times = 0;
   	scanf("%d", &times); 
   	while(i <= times){
   	scanf("%s",&s);
   	longest_palindromic_subsequence();
   	i++;
   	}
   }
   
