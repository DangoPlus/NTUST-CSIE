#include<cstdio>
int main()
{
    int n,test,ans,t,a,i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        scanf("%d",&a);
        ans=t=a;
        for(i=1;i<n;i++) 
        {
            scanf("%d",&a);
            if(t<0) t=a;
            else t=t+a;
            if(ans<t) ans=t;
        }
        printf("%d\n",ans);
    }
    return 0;
}
