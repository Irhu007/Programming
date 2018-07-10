// CPP program to find maximum number of stocks that
// can be bought with given constraints.
#include <bits/stdc++.h>
using namespace std;

// Return the maximum stocks
int buyMaximumProducts(int n, int k, int price[])
{
	vector<pair<int,int>> stock;
	
	for(int i = 0;i<n;i++)
	{
	    stock.push_back(make_pair(price[i],i+1));
	}
	
    sort(stock.begin(),stock.end());
    
    int res = 0;
    
    for(int i = 0;i<n;i++)
    {
        int temp=min(stock[i].second,k/stock[i].first);
        k-= temp*stock[i].first;
        res+=temp;
    }
    return res;
}

// Driven Program
int main()
{
	int price[] = {7, 10, 4 };
	int n = sizeof(price)/sizeof(price[0]);
	int k = 100;

	cout << buyMaximumProducts(n, k, price) << endl;

	return 0;
}

