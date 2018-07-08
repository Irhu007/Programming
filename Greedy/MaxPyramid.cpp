// C++ program to find maximum height pyramid
// from the given object width.
#include<bits/stdc++.h>
using namespace std;


int maxLevel(int boxes[], int n)
{
	unordered_map<int,int> hash;
	hash.insert(make_pair(1, 1));
	for(int i = 2;i<=n;i++)
	{
	    int var = i+hash.find(i-1)->second;
	    hash.insert(make_pair(i, var));
	    
	    if(n>=var)
	    {
	        if(n>var)
	            continue;
	        else
	            return i;
	    }
	    else
	        return i-1;
	}
}

// Driver Program
int main()
{
	int boxes[] = {10, 20, 50, 60, 70, 50, 60, 70, 50, 60, 70};
	int n = sizeof(boxes)/sizeof(boxes[0]);
	cout << maxLevel(boxes, n) << endl;
	return 0;
}

