// DP ON 1D ARRAY
//  You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //==================tabulation solve//=====================
    vector<int> arr = {1, 2, 3, 1};
    int n = arr.size();
    vector<int> dp(n, 0);
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];

    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        int pick = arr[i] + dp[i - 2];
        int non_pick = dp[i - 1];
        dp[i] = max(pick, non_pick);
    }
    cout << dp[n - 1];
}
