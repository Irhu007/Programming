// CPP program to find maximum sum
// by selecting a element from n arrays
#include <bits/stdc++.h>
#define M 4
using namespace std;

int compare = INT_MAX;

int maximumSum(int a[][M], int n) {
    int sum= 0;
    for(int i = n-1;i>=0;i--)
    {
        int last = a[i][0];
        bool work = false;
        for(int j = 0;j<M;j++)
        {
            if(a[i][j]<compare && a[i][j]>=last)
            {
                int temp = a[i][j];
                last = temp;
                work=true;
            }
        }
        if(!work)
            return 0;
        
        compare = last;
        //cout<<compare<<" ";
        sum+=compare;
    }
    return sum;
}

// Driver program to test maximumSum
int main() {
int arr[][M] = {{1, 7, 3, 4},
                   {4, 2, 5, 1},
                   {9, 5, 1, 8}};
int n = sizeof(arr) / sizeof(arr[0]);
cout << maximumSum(arr, n);
return 0;
}


