

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <set>

using namespace std;
int main()
{
    int n;
    cout << "enter number of elements for arr=>";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = i*2; j < n;j++)
        {
            cout << "*"<< endl;
        }
    }
}