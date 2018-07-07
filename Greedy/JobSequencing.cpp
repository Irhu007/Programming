// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<iostream>
#include<algorithm>
using namespace std;

// A structure to represent a job
struct Job
{
char id;	 // Job Id
int dead; // Deadline of job
int profit; // Profit if job is over before or on deadline
};

// This function is used for sorting all jobs according to profit
bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

int maxDead(Job arr[], int n)
{
    int max = -1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i].dead>max)
            max = arr[i].dead;
    }
    return max;
}

// Returns minimum number of platforms reqquired
void printJobScheduling(Job arr[], int n)
{
	// Sort all jobs according to decreasing order of profit
	sort(arr, arr+n, comparison);

    int max = maxDead(arr, n);
    for(int i = max;i > 0;i--)
    {
        for(int j = 0;j<n;j++)
        {
            if(arr[j].dead>=i)
            {
                cout<<arr[j].id<<" ";
                arr[j].dead= 0;
                break;
            }
            
        }
    }
}

// Driver program to test methods
int main()
{
	Job arr[] = { {'a', 4, 100}, {'b', 1, 19}, {'c', 1, 27},
				{'d', 1, 25}, {'e', 1, 15}};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Following is maximum profit sequence of jobsn ";
	printJobScheduling(arr, n);
	return 0;
}

