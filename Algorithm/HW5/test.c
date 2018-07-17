#include<stdio.h>
#include<conio.h>
void dfs(int v,int isvisited[]);
#define MAX 1000
int arr[MAX][MAX];
int flag=1;
main(){
	int n;
	scanf("%d",&n);
	for (int m = 0; m < n; m++)
	{
       int i;
       int v,e,a,b;
       scanf("%d",&v);
       scanf("%d",&e);
       int isvisited[v];
       for(i=0;i<v;i++)
       isvisited[i]=0;
       for(i=0;i<e;i++){
                        scanf("%d %d",&a,&b);            //building af adjacency list...
                        arr[a][0]++;
                        arr[a][arr[a][0]]=b;
                        }
        dfs(0,isvisited);
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
        //getch();
        }
        }
                        
void dfs(int v,int isvisited[]){                         //dfs search and printing in order...
     int i;
     isvisited[v]=1;
     for(i=1;i<=arr[v][0];i++){
     if(isvisited[arr[v][i]]==0)
     dfs(arr[v][i],isvisited);
     else if(isvisited[arr[v][i]]==2)
     {
        flag=0;
        break;
     }
     }
     isvisited[v]=2;
}
