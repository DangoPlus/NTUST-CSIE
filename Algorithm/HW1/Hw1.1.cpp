#include <stdio.h>
struct findMaximum{
	int lowindex;
	int highindex;
	int maximum;
};

findMaximum FindMaxCrossingSubArray(int A[], int low, int mid, int high)
{
   int left_sum = -9999;
   int sum = 0;
   
   findMaximum fmax;
   for (int i = mid; i >= low; i --)
   {
      sum += A[i];
      if (sum >left_sum)
      {
         left_sum = sum;
         fmax.lowindex=i;
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
         fmax.highindex = j;
      }
   }
   fmax.maximum = left_sum + right_sum;
   return fmax;

}
 
findMaximum FindMaximumSubArray(int A[], int low, int high)
{
   findMaximum allin, left_sum, right_sum, cross_sum;
   if (high == low)
   {
   	allin.lowindex = low;
   	allin.highindex = high;
   	allin.maximum = A[low];
    return allin;
   }
   else
   {
      int mid = (low + high) / 2;
      left_sum = FindMaximumSubArray(A, low, mid);
      right_sum = FindMaximumSubArray(A, mid + 1, high);
      cross_sum = FindMaxCrossingSubArray(A, low, mid, high);
      if (left_sum.maximum >= right_sum.maximum && left_sum.maximum >= cross_sum.maximum)
      {
         return left_sum;

      }
      else if (right_sum.maximum >= left_sum.maximum && right_sum.maximum >= cross_sum.maximum)
      {
         return right_sum;
      }
      else
      {
         return cross_sum;
      }
   }
}
int main(){
    int A[100000];
    int n;
    while (scanf("%d",&n) != -1){
    	for (int i = 0; i < n; i ++)
    		scanf("%d",&A[i]);
    	findMaximum final = FindMaximumSubArray(A, 0, n - 1);
    	printf("%d %d %d\n",final.lowindex,final.highindex,final.maximum);
	}
    

    return 0;
}
