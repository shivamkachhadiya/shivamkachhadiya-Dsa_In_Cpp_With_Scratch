#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // left half mei bacha kucha elements ko copy karne ke liye
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    // right half mei bacha kucha elements ko copy karne ke liye
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // merge array vector=>original array
    for (int index = 0; index < temp.size(); index++)
    {
        arr[index + start] = temp[index];
    }
}
void merge_sort(int arr[], int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(arr, start, end);
    for (int val : arr)
    {
        cout << val << " ";
    }
}
