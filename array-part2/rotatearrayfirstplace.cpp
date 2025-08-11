#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];
    for (int x = 1; x <=n ; x++)
    {
        arr[x - 1] = arr[x];
    }
    arr[n - 1] = temp;

    for (int val : arr)
    {
        cout << val;
    }
}
