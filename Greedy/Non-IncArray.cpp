// CPP code to count the change required to
// convert the array into non-increasing array
#include <bits/stdc++.h>
using namespace std;

int DecreasingArray(int arr[], int n)
{
	int sum = 0, dif = 0;
    int min = arr[0];
    
	for(int i = 0;i<n;i++)
	{
	    if(min<arr[i])
	    {
	        dif=arr[i] - min;
	        sum+=dif;
	    }
	    min = arr[i];
	}

	return sum;
}

// Driver Code
int main()
{
	int a[] = {1, 5, 5, 5};
	int n = sizeof(a) / sizeof(a[0]);

	cout << DecreasingArray(a, n);

	return 0;
}

