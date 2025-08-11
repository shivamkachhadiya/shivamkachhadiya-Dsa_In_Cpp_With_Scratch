#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
void findmissing(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if(arr[j]==i){
                flag = 1;
                break;
            }
            
        }
        if(flag==0){
            cout << "missing number is=>"<<i;
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
