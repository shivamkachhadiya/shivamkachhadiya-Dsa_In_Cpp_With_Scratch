#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int solve(string s)
{
    int n = s.size();
    unordered_map<char, int> freq;
    int left = 0, right = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
        while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0)
        {
            count += (n - i);
            freq[s[left]]--;
            left++;
        }
    }
    return count;
}
int main()
{
    string s = "abc";
    int ans = solve(s);
    cout << ans;
}