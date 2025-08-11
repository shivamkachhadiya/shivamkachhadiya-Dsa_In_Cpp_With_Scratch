
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
void longestsubarray(int arr[], int n, int k)
{
    int len = 0;
    int sum = arr[0];
    int i = 0, j = 0;
    while (j < n)
    {
        while (i <= j && sum > k)
        {
            sum = sum - arr[i];
            i++;
        }

        if (sum == k)
        {
            len = max(len, j - i + 1);
        }
        j++;
        if (j < n)
        {
            sum = sum + arr[j];
        }
    }
    cout << "length is" << len;
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
    int k;
    cout << "enter value for k";
    cin >> k;
    longestsubarray(arr, n, k);
}

