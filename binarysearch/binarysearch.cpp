#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
// 1,2,4,5,6,7,8,9

int binary_search1(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + end / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
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

    int d;
    cout << "enter value for target=>";
    cin >> d;
    int val = binary_search1(arr, n, d);
    if (val == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found at index" << val << endl;
    }
}
