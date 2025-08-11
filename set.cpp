#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <set>

using namespace std;
int main()
{
    int n;
    cout << "enter number of elements for arr1=>";
    cin >> n;

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int n1;
    cout << "enter number of elements for arr2=>";
    cin >> n1;

    int arr2[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr2[i];
    }
    set<int> set;

    for (int i = 0; i < n; i++)
    {
        set.insert(arr1[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        set.insert(arr2[i]);
    }

    for (int val : set)
    {
        cout << val;
    }
}
