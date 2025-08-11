
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
void twosum(int arr[],int n,int k){
    int j = 1;
    int i = 0;
    int a = 0;
    int b = 0;
    while(j<n){
        if(arr[i]+arr[j]==k){
            a = arr[i];
            b = arr[j];
            j++;
        }else if(j==n){
            i++;
        }else{
            j++;
        }
    }
    cout << a << endl;
    cout << b << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter value for k";
    cin >> k;
    twosum(arr, n, k);
}

