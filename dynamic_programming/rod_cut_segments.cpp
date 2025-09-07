// Given an integer n denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
// After performing all the cut operations, your total number of cut segments must be maximum. Return the maximum number of cut segments possible.

// Note: if no segment can be cut then return 0.

// Examples:

// Input: n = 4, x = 2, y = 1, z = 1
// Output: 4
// Explanation: Total length is 4, and the cut lengths are 2, 1 and 1.  We can make maximum 4 segments each of length 1.
// Input: n = 5, x = 5, y = 3, z = 2
// Output: 2
// Explanation: Here total length is 5, and the cut lengths are 5, 3 and 2. We can make two segments of lengths 3 and 2.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int solveMem(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;
    if (dp[n] != -1)
        return dp[n];

    int a = solveMem(n - x, x, y, z, dp) + 1;
    int b = solveMem(n - y, x, y, z, dp) + 1;
    int c = solveMem(n - z, x, y, z, dp) + 1;

    dp[n] = max(a, max(b, c));
    return dp[n];
}
int main()
{
    cout << "enter value for N" << endl;
    int n;
    cin >> n;

    cout << "enter value for X" << endl;
    int x;
    cin >> x;

    cout << "enter value for Y" << endl;
    int y;
    cin >> y;

    cout << "enter value for Z" << endl;
    int z;
    cin >> z;

    vector<int> dp(n + 1, -1);
    int ans = solveMem(n, x, y, z, dp);
    if (ans < 0)
        cout << 0;
    else
        cout << ans;
    return 0;
}