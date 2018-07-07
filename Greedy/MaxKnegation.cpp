// C++ program to to maximize array sum after
// k operations.
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int maximumSum(int arr[], int n, int k)
{
    int sum = 0;
	
	for(int j = 0;j<k;j++)
	{
        sort(arr,arr+n);
    	arr[0] = -arr[0];
	}
	for(int i = 0;i<n;i++)
    	{
    	   sum+=arr[i];
    	}
	return sum;
}
int main()
{
	int arr[] = {9, 8, 8, 5};
	int k = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<maximumSum(arr, n, k);
	return 0;
}
