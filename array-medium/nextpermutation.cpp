
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
int pivot;
int pivotindex;
void nextp(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
        }
        else
        {
            pivot = arr[i - 1];
            pivotindex = i - 1;
            break;
        }
    }
    // cout << "pivot is" << pivot << endl;
    // cout << "pivot index is=>" << pivotindex << endl;
    if (pivotindex == -1)
    {
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
    else
    {
        swap(arr[pivotindex], arr[n - 1]);
        int start = pivotindex + 1;
        int end = n - 1;
        int mid = (start + end) / 2;
        while (start <= mid)
        {
            swap(arr[start], arr[end]);

            start++;
            end--;
        }
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

    nextp(arr, n);
    for (int val : arr)
    {
        cout << val;
    }
}
