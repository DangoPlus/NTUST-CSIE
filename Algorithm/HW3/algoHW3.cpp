#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
int N;

typedef struct activity
{
    int number;
    int start_time;
    int finish_time;
    int value;
}Activity;   //定义一个活动的结构体

bool sort_function(Activity a,Activity b)
{
    return a.finish_time<b.finish_time;
}     //排序函数，为后面的sort函数服务，代表根据结束时间进行升序排列


int main()
{
    cin>>N; //N代表有几笔测资
    while(N>0)
    {
        int M;
        cin>>M;  //M代表有多少活动
        Activity act[M]; //定义M个活动的结构体
        int c[M];  //数组c代表前缀活动。即若c[i]=j,那么j之后被选中安排的活动是i
        memset(c,-1,sizeof c); //初始化数组，-1代表该活动没有被选中，无前缀
        for(int i=0;i<M;i++)
        {
            cin>>act[i].number;
            cin>>act[i].start_time;
            cin>>act[i].finish_time;
            cin>>act[i].value;
        }   //输入数据
        sort(act,act+M,sort_function); //对所有活动按照结束时间进行升序排序
        int s[M]; //s数组用来存储当前能达到的最大value之和，即s[i}代表前i个活动在最优安排下的value和
        s[0]=act[0].value; //当只有一个活动的时候，最优解就是该活动的值
        c[0]=0;  //初始化c[0]=0
        for(int i=1;i<M;i++)  //自底向上的dp
        {
            s[i]=0;//先初始化为0 方便之后的更新
            int j;
            for(j=i-1;j>=0;j--) //在i前面找一个活动j，使j的结束时间早于i的开始时间
            {
                if(act[j].finish_time <= act[i].start_time) //如果找到了这样一个活动j
                {
                   if((s[i-1]>s[j]+act[i].value)&&(s[i-1]>=s[i]))
                    s[i]=s[i-1];    //比较s[j]+act[i].value和s[i-1].即在（选取前j个活动的最优解+活动i）和（前i-1个活动最优解）中选最佳方案
                    else if((s[i-1]<=s[j]+act[i].value)&&(s[j]+act[i].value>=s[i]))
                   {
                      s[i]=s[j]+act[i].value;
                      c[i]=j;    //当选取方案（选取前j个活动的最优解+活动i）时，i的前缀活动变为j
                   }
                }
                 else  //开始考虑另一种情况，即没有这样的一个j活动满足：j的结束时间早于i的开始时间
                 {
                   if((s[i-1]>act[i].value)&&(s[i-1]>=s[i]))
                      s[i]=s[i-1];       //比较（前i-1个活动的最佳方案）和（活动i的value）取最优解
                   else if((s[i-1]<=act[i].value)&&(act[i].value>=s[i]))
                   {
                     s[i]=act[i].value;  //当活动i的value更大时，舍弃前i-1个活动，即活动i变为第一个进行的活动，过i的前缀活动是i自身
                     c[i]=i;
                   }
                 }

            }//因为不断在寻找j值，不同的j有不同的方案，所以每次在赋值给i时都是刷新s[i],只有此次方案的解大于s[i]时，才能进行赋值，刷新s[i]
    }
        cout << s[M-1] << endl;//输出最优value值之和
        int k=M-1,q=0;
        int p[M];  //用来存放被选中活动的number
            while(c[k]!=k) //c[k]=k,意味着起点，故从后往前找，直到找到起点
            {
                if(c[k]!=-1)  //从后往前找到第一个有前缀的活动，即为被选中的最后一个活动
                {
                    p[q]=act[k].number;
                k=c[k]; //不断往前找前缀活动，并存储活动的number
                q++;
                }
                else
                    k--;
            }
            p[q]=act[k].number;
            sort(p,p+q+1); //根据number进行排序
            for(int i=0;i<q;i++)
                cout<<p[i]<<" ";//从小到大输出被选中活动的number
            cout<<p[q];
        cout<<endl;

      N--;
    }
}
