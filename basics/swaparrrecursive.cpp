#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void f(int l, int r, int arr[])
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    f(l + 1, r - 1, arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sizeofarray = sizeof(arr) / 4;
    f(0, (sizeofarray)-1, arr);

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << arr[i];
    }
}
