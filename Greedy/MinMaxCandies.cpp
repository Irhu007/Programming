// C++ implementation to find the minimum
// and maximum amount
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// Function to find the minimum amount
// to buy all candies
int findMinimum(int arr[], int n, int k)
{
    sort(arr,arr+n);
// 	vector<int> min;
// 	min.assign(arr,arr+n);
    int res=0;
    for(int i = 0;i<n;i++)
    {
        res+=arr[i];
        n-=k;
    }
    return res;
}

// Function to find the maximum amount
// to buy all candies
int findMaximum(int arr[], int n, int k)
{
// 	vector<int> max;
// 	max.assign(arr,arr+n);
	
	sort(arr,arr+n,std::greater<int>());
	int res=0;
    for(int i = 0;i<n;i++)
    {
        res+=arr[i];
        n-=k;
    }
    return res;
}

// Driver code
int main()
{
	int arr[] = {3, 2, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	sort(arr, arr+n);

	cout << findMinimum(arr, n, k)<<" "
		<< findMaximum(arr, n, k)<<endl;
	return 0;
}

