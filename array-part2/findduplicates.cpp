#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<vector>

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
    vector<int> tmp;

    for (int i = 0; i < n;i++){
        
        for (int j = i+1; j < n;j++){
            if(arr[i]==arr[j]){
                tmp.push_back(arr[i]);
            }
        }
    }

        for (int val : tmp)
        {
            cout << val;
        }
}
