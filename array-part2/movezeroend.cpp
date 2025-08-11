#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
void movezeroend(int arr[],int n){
    vector<int> tmp;
    int j = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j] = 0;
        j++;
    }
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
    movezeroend(arr, n);

    for (int val : arr)
    {
        cout << val;
    }
}
