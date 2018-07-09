// C++ program to find minimum number of denominations
#include <bits/stdc++.h>
using namespace std;

// All denominations of Indian Currency
int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
int n = sizeof(deno)/sizeof(deno[0]);

// Driver program
void findMin(int V)
{
    while(V!=0)
    {
        for(int i = 0;i<n;i++)
        {
            if(deno[i]>V)
            {
                cout<<deno[i-1]<<" ";
                V-=deno[i-1];
                break;
            }
            else if(deno[i]==V)
            {
                cout<<deno[i]<<" ";
                V-=deno[i];
                break;
            }
            else if(V>deno[n-1])
                {
                    cout<<deno[n-1]<<" ";
                    V-=deno[n-1];
                    break;
                }
            
        }
    }
}

// Driver program
int main()
{
int n = 1690;
cout << "Following is minimal number of change for " << n << " is ";
findMin(n);
return 0;
}

