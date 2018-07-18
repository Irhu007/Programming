// CPP program to make GCD of array a mutiple
// of k.
#include <bits/stdc++.h>
using namespace std;

int MinOperation(int arr[], int n, int k)
{
	
	int res = 0;
	
	for(int i = 0;i<n;i++)
	{
	    int mod=0;
	    mod = arr[i]%k;
	    
	    if(k-mod<mod)
	        res+=(k-mod);
	    else
	        res+=mod;
	}

	return res;
}

// Driver code
int main()
{
	int arr[] = { 7,13,19 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	cout << MinOperation(arr, n, k);
	return 0;
}

