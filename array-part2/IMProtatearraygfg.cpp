#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        // swap(arr[start], arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int n, int d)
{
    d = d % n;
    int start = 0;
    int end = n - 1;
    reverse(arr, start, d - 1);
    reverse(arr, d, end);
    reverse(arr, start, end);
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
    cout << "enter value for d=>";
    cin >> d;
    rotate(arr, n, d);

    for (int val : arr)
    {
        cout << val;
    }
}
