// CPP program to calculate max_difference between
// the sum of two subarrays of length k and N - k
#include <bits/stdc++.h>
using namespace std;

// Function to calculate max_difference
int maxDifference(int arr[], int n, int k)
{
	sort(arr,arr+n);
	
	int sum1 = 0, sum2=0;
	
	for(int i = 0;i<n;i++)
	{
	    if(i<k)
	        sum1+=arr[i];
	    else
	        sum2+=arr[i];
	}
	return abs(sum1-sum2);
}

// Driver function
int main()
{
	int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << maxDifference(arr, N, k) << endl;
	return 0;
}

