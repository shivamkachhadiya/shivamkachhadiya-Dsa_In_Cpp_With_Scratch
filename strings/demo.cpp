#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <set>

using namespace std;
int main()
{

    char arr[] = "hello world";
    int i = -1;
    for (char c : arr)
    {
        i++;
        cout << c << endl;
    }
    cout << i;
}
