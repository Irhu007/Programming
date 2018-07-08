// CPP implementation of
// above algorithm
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int MaxSumDifference(int a[], int n)
{
    vector<int> seq;
    sort(a,a+n);
    
    for(int i = 0;i < n/2; i++)
    {
        seq.push_back(a[i]);
        seq.push_back(a[n-i-1]);
    }
    
    int sum=0;
    for(int i = 0;i<n-1;i++)
    {
        sum+=abs(seq[i]-seq[i+1]);
    }
    sum+=abs(seq[0]-seq[n-1]);
    return sum;
}

// Driver function
int main()
{
    int a[] = { 1, 2, 4, 8 };
    int n = sizeof(a) / sizeof(a[0]);

    cout << MaxSumDifference(a, n) << endl;
}
