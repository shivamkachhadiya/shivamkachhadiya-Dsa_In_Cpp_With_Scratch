#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

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

    for (int val : arr)
    {
        cout << val;
    }
}
