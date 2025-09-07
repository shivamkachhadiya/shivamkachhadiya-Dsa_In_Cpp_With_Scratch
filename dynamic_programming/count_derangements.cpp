// Count Derangements (Permutation such that no element appears in its original position)
// Last Updated : 23 Jul, 2025
// A Derangement is a permutation of n elements, such that no element appears in its original position. For example, a derangement of [0, 1, 2, 3] is [2, 3, 1, 0].
// Given a number n, find the total number of Derangements of a set of n elements.

// Examples :

// Input: n = 2
// Output: 1
// Explanation: For two balls [1, 2], there is only one possible derangement [2, 1].

// Input: n = 3
// Output: 2
// Explanation: For three balls [1, 2, 3], there are two possible derangements [3, 1, 2] and [2, 3, 1].

#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
long long int solveMem(int n, vector<long long int> &dp)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    // dp[n] = (((n - 1) % MOD) * ((solveMem(n - 1, dp) * MOD) + (solveMem(n - 1, dp) % MOD)) % MOD);
    dp[n] = ((n - 1) % MOD * (solveMem(n - 1, dp) % MOD)) % MOD;

    return dp[n];
}
int main()
{
    int n;
    cin >> n; // take n as input
    vector<long long int> dp(n + 1, -1);
    long long int ans = solveMem(n, dp);
    cout << ans;
}
