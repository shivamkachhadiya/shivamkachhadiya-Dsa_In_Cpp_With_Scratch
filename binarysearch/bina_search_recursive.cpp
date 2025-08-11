#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
// 1,2,4,5,6,7,8,9

int binary_search_recursive(int arr[], int start, int end, int target)
{

    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binary_search_recursive(arr, start, mid - 1, target);
    }
    else
    {
        return binary_search_recursive(arr, mid + 1, end, target);
    }
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
    int start = 0, end = n - 1;
    int val = binary_search_recursive(arr, start, end, d);
    if (val == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found at index" << val << endl;
    }
}
