#include <iostream>
#include <unordered_map>
#include <limits.h>
#include <cmath>
using namespace std;

void kanadesmaxsubarraysum(int arr[], int n)
{
    int curruntsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curruntsum = curruntsum + arr[i];
        maxsum = max(curruntsum, maxsum);
        if (curruntsum < 0)
        {
            curruntsum = 0;
        }
    }
    cout << maxsum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    kanadesmaxsubarraysum(arr, n);
}

