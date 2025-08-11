#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int largest;
int secondlargest;
int find_secondlargest(int arr[], int n)
{
    int i = 0;
    largest = arr[0];
    secondlargest = -1;
    while (i <= n - 1)
    {
        if (arr[i] >= largest)
        {
            largest = arr[i];
        }
        i++;
    }
    for (int x = 0; x < n;x++){
        if(arr[x]>secondlargest&&arr[x]!=largest){
            secondlargest = arr[x];
        }
    }
    return secondlargest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    find_secondlargest(arr, n);
    // for (int val : arr)
    // {
    //     cout << val;
    // }
    cout << "second largest element is--->" << secondlargest;
}
