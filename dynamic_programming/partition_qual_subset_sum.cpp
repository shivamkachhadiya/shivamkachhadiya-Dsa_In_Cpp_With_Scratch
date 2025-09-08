#include <iostream>
#include <vector>
using namespace std;

bool f(int index, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    // base case: target found
    if (target == 0)
        return true;
    if (index == 0)
    {
        return arr[0] == target;
    }
    if (dp[index][target] != -1)
    {
        return dp[index][target];
    }

    bool notTake = f(index - 1, target, arr, dp);
    bool take = false;
    if (arr[index] <= target)
    {
        take = f(index - 1, target - arr[index], arr, dp);
    }

    dp[index][target] = take || notTake;
    return dp[index][target];
}

bool solve(vector<int> arr, int n, int sum)
{
    if (sum % 2 != 0)
        return false;
    int target = sum / 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    return f(n - 1, target, arr, dp);
}

int main()
{
    vector<int> arr = {1, 5, 11, 5};
    int n = arr.size();
    int sum = 0;
    for (auto a : arr)
    {
        sum += a;
    }

    bool finalAns = solve(arr, n, sum);
    if (finalAns == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
