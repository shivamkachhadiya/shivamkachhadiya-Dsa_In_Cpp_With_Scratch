#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int largest;

int find_largest(int arr[], int n)
{
    int i = 0;
    largest = arr[0];
    while (i <= n - 1)
    {
        if (arr[i] >= largest)
        {
            largest = arr[i];
        }
        i++;
    }
    return largest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    find_largest(arr, n);
    // for (int val : arr)
    // {
    //     cout << val;
    // }
    cout << "largest element is--->" << largest;
}
