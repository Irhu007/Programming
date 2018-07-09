#include <bits/stdc++.h>
using namespace std;

bool areBookingsPossible(int arrival[], int departure[], int n, int k)
{
    int last_date= departure[0];
    int j=0;
    int room=1;
    for(int i = 1;i<n;i++)
    {
        if(arrival[i]>last_date)
        {
            last_date = departure[i];
            j=i;
        }
        else
        {
            if(last_date>arrival[i])
                room++;
            else
            {
                j=j+1;
                last_date = departure[j];
            }
        }
    }
    //cout<<room<<" ";
    return room>k?0:1;
}

int main()
{
	int arrival[] = { 1, 3, 5, 7 };
	int departure[] = { 2, 8, 8, 10 };
	int n = sizeof(arrival) / sizeof(arrival[0]);
	cout << (areBookingsPossible(arrival,
			departure, n, 1) ? "Yes\n" : "No\n");
	return 0;
}

