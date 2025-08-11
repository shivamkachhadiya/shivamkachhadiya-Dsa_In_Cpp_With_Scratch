#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{

    //for store input string
    string s;
    cin >> s;

    //making hash array for mapping

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    //take number of character want to check
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;

    }
  
}
