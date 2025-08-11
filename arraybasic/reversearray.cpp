#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
void reverse_array(int arr[], int n)
{

    // Code here
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= mid)
    {
        // swap(arr[start],arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse_array(arr, n);
    for (int val : arr)
    {
        cout << val;
    }
}
