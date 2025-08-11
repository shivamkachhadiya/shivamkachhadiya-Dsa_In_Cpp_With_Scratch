#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int cnt = 0;
int sum = 0;
void f()
{
    if (cnt == 6)
    {
        return;
    }
    // cout<<cnt;
    cnt++;
    sum = sum + cnt;
    f();
}
int main()
{
    f();
    cout << sum;
}
