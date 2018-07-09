// C/C++ program to solve fractional Knapsack Problem
#include <bits/stdc++.h>
using namespace std;

// Structure for an item which stores weight and corresponding
// value of Item
struct Item
{
	int value, weight;

	// Constructor
	Item(int value, int weight) : value(value), weight(weight)
	{}
};

bool cmp(struct Item a,struct Item b)
{
    double value1 = (double)a.value/a.weight;
    double value2 = (double)b.value/b.weight;
    
    return value1>value2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n)
{
	sort(arr,arr+n,cmp);
	double maxValue = 0;
	for(int i = 0;i<n;i++)
	{
	   // cout<<arr[i].value<<" ";
	    if(W==0)
	        break;
	    if(arr[i].weight<W)
	    {
	        maxValue+=(double)arr[i].value;
	        W-=arr[i].weight;
	    }
	    else
	    {
	        maxValue+=W*((double)(arr[i].value/arr[i].weight));
	        W-=(double)(arr[i].value/arr[i].weight);
	    }
	}
	return maxValue;
}

// driver program to test above function
int main()
{
	int W = 50; // Weight of knapsack
	Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Maximum value we can obtain = "
		<< fractionalKnapsack(W, arr, n);
	return 0;
}

