#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallindex])
            {
                smallindex = j;
            }
        }
        swap(arr[i], arr[smallindex]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionsort(arr, n);
    for (int val : arr)
    {
        cout << val;
    }
}
