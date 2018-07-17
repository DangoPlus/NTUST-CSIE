/*
 * 对于给定的整数数组A，求出数组中具有最大和的子数组，最大和以及左右下标
 * 思路：采用分治的方法，将数组分为两部分，则有最大和的子数组共有三种情况
 * 在数组左边，在数组右边，跨越数组中点
 */
 
#include <iostream>
using namespace std;
 
//存放左右边界值以及sum值的结构体
/*特别注意结构体的使用！！！！！！！！！！！*/
struct SumBorder
{
    int left; //左部边界下标
    int right; //右部边界下标
    int sum; //左右边界之间的数组元素和
};
 
//找到横跨中点mid，在数组A[low..high]之间的最大子数组的和
SumBorder *findMaxCrossSubarray(int *ptrA, int low, int mid, int high)
{+
    /*得到mid左边的最大和*/
    int leftSum = ptrA[mid]; //左部最大和
    int maxLeft = mid; //左边界
    int sum = 0;
    for (int i = mid; i >= low; i--)
    {
        sum += ptrA[i];
        if (sum >= leftSum)
        {
            leftSum = sum;
            maxLeft = i;
        }
    }
    /*得到mid+1及右边最大和*/
  
  +  int rightSum = ptrA[mid + 1];
    int maxRight = mid + 1;
    sum = 0;
    for (int j = mid + 1; j <= high; j++)
    {
        sum += ptrA[j];
        if (sum >= rightSum)
        {
            rightSum = sum;
            maxRight = j;
        }
    }
    /*统计汇总*/
    SumBorder sumBorder;
    SumBorder *ptr = &sumBorder;
    ptr->left = maxLeft;
    ptr->right = maxRight;
    ptr->sum = leftSum + rightSum;
    cout << ptr->left << "-" << ptr->right << " sum:" << ptr->sum << endl;
    return ptr;
}
 
/*得到数组A(从low到high)的最大子数组和*/
SumBorder *findMaxSubarray(int *ptrA, int low, int high)
{
    SumBorder sumBorder;
    SumBorder *sumBorderPtr = &sumBorder;
    if (high == low)
    {
        sumBorder.left = low;
        sumBorder.right = high;
        sumBorder.sum = ptrA[low];  
    }
    else
    {
        int mid = (low + high) / 2;
        //得到三种情况下的结构体指针变量并进行进一步的判断
        SumBorder *left = findMaxSubarray(ptrA, low, mid);
        SumBorder *right = findMaxSubarray(ptrA, mid + 1, high);
        SumBorder *cross = findMaxCrossSubarray(ptrA, low, mid, high);
        if (left->sum >= right->sum  && left->sum >= cross->sum)
        {
            sumBorder.left = left->left;
            sumBorder.right = left->right;
            sumBorder.sum = left->sum;
        }
        else if (right->sum >= left->sum && right->sum >= cross->sum)
        {
            sumBorder.left = right->left;
            sumBorder.right = right->right;
            sumBorder.sum = right->sum;
        }
        else
        {
            sumBorder.left = cross->left;
            sumBorder.right = cross->right;
            sumBorder.sum = cross->sum;
        }
    }
    cout << sumBorderPtr->left << "-" << sumBorderPtr->right
         << " 最大值为:" << sumBorderPtr->sum << endl;
    return sumBorderPtr;
}
 
int main()
{
    //给定的数组
    int A[] = {0, 13, -3, -25, 20, -3, -16, -23, 18,
               20, -7, 12, -5, -22, 15, -4, -7};
    SumBorder sumBorder;
    SumBorder *Ptr = &sumBorder;
    SumBorder *test = findMaxSubarray(A, 1, 16); //吃过大亏！
    Ptr->left = test->left;
    Ptr->right = test->right;
    Ptr->sum = test->sum;
 
    /* 把上面的替换成这样是错误的，仔细学习一下struct结构体！！
    SumBorder *Ptr = findMaxSubarray(A, 1, 16);
    cout << "left:" << Ptr->left << endl;
    cout << "right:" << Ptr->right << endl;
    cout << "sum:" << Ptr->sum << endl;
    */
 
    cout << "数组A的最大子数组和为：" << endl;
    cout << "left:" << Ptr->left << endl;
    cout << "right:" << Ptr->right << endl;
    cout << "sum:" << Ptr->sum << endl;
    system("pause >> cout");
    return 0;
}
