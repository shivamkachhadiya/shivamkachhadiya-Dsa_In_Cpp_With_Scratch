#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int a1 = 0;
int a2 = 1;
int sum = 0;
int count = 0;

int f(int ans)
{
   if(count-1==ans){
       return 0;
   }
   cout << a1;
   cout << a2;
   sum = a1 + a2;
   cout << sum;
}

int main()
{

    cout << "enter till number";
    int x;
    cin >> x;
    f(x);
}
