// CPP program to split a number into maximum
// number of composite numbers.
#include <bits/stdc++.h>
using namespace std;

// function to calculate the maximum number of
// composite numbers adding upto n
int count(int n)
{
    int sub = 0;
	unordered_set<int> hash = { 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20};
    
    int search = n%4;
    
    if(search==0)
        return n/4;
    else
    {
        while(hash.find(search)==hash.end())
        {
            sub++;
            search+=4;
        }
        if(*hash.find(search)==15)
            return (n/4 + 2 - sub);
        else
            return (n/4 + 1 - sub);
    }
}

// driver program to test the above function
int main()
{
	int n = 90;
	cout << count(n) << endl;

	n = 143;
	cout << count(n) << endl;
	return 0; 
}

