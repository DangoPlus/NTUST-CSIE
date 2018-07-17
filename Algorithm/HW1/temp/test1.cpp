/*
 * ���ڸ�������������A����������о������͵������飬�����Լ������±�
 * ˼·�����÷��εķ������������Ϊ�����֣��������͵������鹲���������
 * ��������ߣ��������ұߣ���Խ�����е�
 */
 
#include <iostream>
using namespace std;
 
//������ұ߽�ֵ�Լ�sumֵ�Ľṹ��
/*�ر�ע��ṹ���ʹ�ã���������������������*/
struct SumBorder
{
    int left; //�󲿱߽��±�
    int right; //�Ҳ��߽��±�
    int sum; //���ұ߽�֮�������Ԫ�غ�
};
 
//�ҵ�����е�mid��������A[low..high]֮������������ĺ�
SumBorder *findMaxCrossSubarray(int *ptrA, int low, int mid, int high)
{+
    /*�õ�mid��ߵ�����*/
    int leftSum = ptrA[mid]; //������
    int maxLeft = mid; //��߽�
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
    /*�õ�mid+1���ұ�����*/
  
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
    /*ͳ�ƻ���*/
    SumBorder sumBorder;
    SumBorder *ptr = &sumBorder;
    ptr->left = maxLeft;
    ptr->right = maxRight;
    ptr->sum = leftSum + rightSum;
    cout << ptr->left << "-" << ptr->right << " sum:" << ptr->sum << endl;
    return ptr;
}
 
/*�õ�����A(��low��high)������������*/
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
        //�õ���������µĽṹ��ָ����������н�һ�����ж�
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
         << " ���ֵΪ:" << sumBorderPtr->sum << endl;
    return sumBorderPtr;
}
 
int main()
{
    //����������
    int A[] = {0, 13, -3, -25, 20, -3, -16, -23, 18,
               20, -7, 12, -5, -22, 15, -4, -7};
    SumBorder sumBorder;
    SumBorder *Ptr = &sumBorder;
    SumBorder *test = findMaxSubarray(A, 1, 16); //�Թ������
    Ptr->left = test->left;
    Ptr->right = test->right;
    Ptr->sum = test->sum;
 
    /* ��������滻�������Ǵ���ģ���ϸѧϰһ��struct�ṹ�壡��
    SumBorder *Ptr = findMaxSubarray(A, 1, 16);
    cout << "left:" << Ptr->left << endl;
    cout << "right:" << Ptr->right << endl;
    cout << "sum:" << Ptr->sum << endl;
    */
 
    cout << "����A������������Ϊ��" << endl;
    cout << "left:" << Ptr->left << endl;
    cout << "right:" << Ptr->right << endl;
    cout << "sum:" << Ptr->sum << endl;
    system("pause >> cout");
    return 0;
}
