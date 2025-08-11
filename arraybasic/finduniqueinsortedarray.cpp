#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int i = 0;

int find_uniq(int arr[], int n)
{
    int j = 1;
    // int first = arr[0];
    for (j; j <= n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    find_uniq(arr, n);
    cout << "number of unique element is==>" << i;
}
