#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int leftSum = -9999;
int rightSum = -9999;
int crossSum = -9999;
int Sum = 0;
int max(int a,int b)
{
	return (a>b) ? a : b;
}
int max(int a,int b,int c)
{
	return max(max(a,b),c);
}
int findMaximumSubarrayCrossing(int *A,int low,int mid,int high)
{
	
//	calculating left sum 
	
	int sum= 0 ;
	int l_sum = INT_MIN;
	for(int i = mid;i>=low;i--)
	{
		sum+=A[i];
		if(sum>=l_sum)
			l_sum = sum;
	}
	
	//	calculating right sum 
	
	sum = 0;
	int r_sum=INT_MIN;
	for(int i=mid+1;i<=high;i++)
	{
		sum+=A[i];
		if(sum>=r_sum)
			r_sum = sum;
	}
	
//	 adding left sum and right sum in order to get the maximum sum across middle element;
	return l_sum+r_sum;
}

int findMaximumSubarray(int *A,int low,int high)
{
	if(low==high)
		return A[low];   		// base case returning a single element
	else
	{
		int mid = (low+high)/2;     							// if more than one element is present in  the subarray , then the array is further divided
		leftSum = findMaximumSubarray(A,low,mid);         		// calculate sum on the LHS of middle element
		rightSum  =findMaximumSubarray(A,mid+1,high);			// calculate sum on the RHS of middle element
 		crossSum = findMaximumSubarrayCrossing(A,low,mid,high);	// calculate sum crossing middle element LHS-mid_RHS
		return max(leftSum,rightSum,crossSum);					// finally return the maximum sum;
	}
			
	return 0;	
}
int main(void)
{
	int A[]={10,-16,5,2,-1,7,-8,-5,3};
	int n = sizeof(A)/sizeof(A[0]);
	int low=0;
	int high = n-1;
//	int S[]; 
	cout<<findMaximumSubarray(A,low,high);
	printf("\n%d\n",A[low]);
	printf("%d\n",A[high]);
	printf("%d %d\n",leftSum,rightSum);
}
