#include <stdio.h>
 int lowin,highin;
int FindMaxCrossingSubArray(int A[], int low, int mid, int high)
{
   int left_sum = -9999;
   int sum = 0;
   for (int i = mid; i >= low; i --)
   {
      sum += A[i];
      if (sum >left_sum)
      {
         left_sum = sum;
      }
   }
   int right_sum = -9999;
   sum = 0;
   for (int j = mid + 1; j <= high; j ++)
   {
      sum += A[j];
      if (sum > right_sum)
      {
         right_sum = sum;
      }
   }
   return left_sum + right_sum;

}
 
int FindMaximumSubArray(int A[], int low, int high)
{
   int left_sum, right_sum, cross_sum;
   if (high == low)
   {
      return A[low];
   }
   else
   {
      int mid = (low + high) / 2;
      left_sum = FindMaximumSubArray(A, low, mid);
      right_sum = FindMaximumSubArray(A, mid + 1, high);
      cross_sum = FindMaxCrossingSubArray(A, low, mid, high);
      if (left_sum >= right_sum && left_sum >= cross_sum)
      {
      	 lowin = low;
      	 highin = mid;
         return left_sum;

      }
      else if (right_sum >= left_sum && right_sum >= cross_sum)
      {
      	 lowin = mid +1;
      	 highin = high;
         return right_sum;
      }
      else
      {
      	 lowin = low;
      	 highin = high;
         return cross_sum;
      }
   }
}
int main(){
    int A[100];
    int n;
    //printf("Please input the number of numbers:");
    scanf("%d",&n);
    for (int i = 0; i < n; i ++)
    {
       scanf("%d",&A[i]);
    }
    printf("%d %d %d\n",lowin,highin,FindMaximumSubArray(A, 0, n - 1));

    return 0;
}
