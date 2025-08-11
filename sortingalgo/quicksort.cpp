#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int position(int arr[], int start, int end)
{
    int index = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }

    swap(arr[end], arr[index + 1]);
    return index + 1;
}
void quick_sort(int arr[], int start, int end)
{

    if (start < end)
    {
        int pivotindex = position(arr, start, end);
        quick_sort(arr, start, pivotindex - 1);
        quick_sort(arr, pivotindex + 1, end);
    }
}

int main()
{
    int n;
    cout << "enter number of elements...";
    cin >> n;
    int arr[n];
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quick_sort(arr, start, end);
    for (int val : arr)
    {
        cout << val;
    }
}
