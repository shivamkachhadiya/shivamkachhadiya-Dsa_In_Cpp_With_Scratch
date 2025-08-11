
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
void findmissing(int arr[], int n)
{
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 1; i < n;i++){
        if(hash[i]==0){
            cout << "missing number is =>"<<i;
        }
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
    findmissing(arr, n);
}
