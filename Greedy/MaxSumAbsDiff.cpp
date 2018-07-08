// CPP implementation of
// above algorithm
#include <bits/stdc++.h>
using namespace std;

int MaxSumDifference(int a[], int n)
{
    sort(a,a+n);
    
    int sum=0;
    for(int i = 0;i<n;i++)
    {
        sum+=abs(a[i]-a[n-i-1]);
    }
    return sum;
}

// Driver function
int main()
{
	int a[] = { 1, 2, 4, 8 };
	int n = sizeof(a) / sizeof(a[0]);

	cout << MaxSumDifference(a, n) << endl;
}
