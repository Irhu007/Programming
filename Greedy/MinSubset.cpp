// CPP program to find maximum product of
// a subset.
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int prod = 1;
bool zero = false;

int minProductSubset(int a[], int n)
{
	int maxNeg = INT_MIN, minPos = INT_MAX, evenNeg = 0;
	
	for(int i = 0;i<n;i++)
	{
	    if(a[i]==0)
	    {
	        zero = true;
	        continue;
	    }
	    if(a[i]<0)
	    {
	        evenNeg++;
	        maxNeg=max(a[i],maxNeg);
	    }
	    else
	    {
	        minPos=min(a[i],minPos);
	    }
	    prod = prod*a[i];
	}
	if(evenNeg==0)
	{
	    if(zero)
	        return 0;
	    else
	        return minPos;
	}
	if(evenNeg%2==0)
	{
	    return prod/maxNeg;
	}
	else
	    return prod;
}

int main()
{
	int a[] = { -1, -1, -2, 4, 3 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << minProductSubset(a, n);
	return 0;
}

