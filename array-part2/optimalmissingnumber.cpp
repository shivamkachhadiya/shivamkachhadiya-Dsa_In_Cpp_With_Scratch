
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
void findmissing(int arr[], int n)
{
    int sum = (n * (n + 1)) / 2;
    int arraysum = 0;
    for (int i = 0; i < n-1; i++)
    {
        arraysum = arraysum + arr[i];
    }
    

    cout << "missing number->" << sum-arraysum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    findmissing(arr, n);
}
