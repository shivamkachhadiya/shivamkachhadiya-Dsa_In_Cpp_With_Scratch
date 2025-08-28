#include <iostream>
#include <vector>

using namespace std;

int fib(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
        return n;
    // step 2
    if (dp[n] != -1)
        return dp[n];

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
    //0 1 1 2 3 5 8 13
}
int main()
{
    cout << "enter n";
    int n;
    cin >> n;
    vector<int> dp(n + 1);

    for (int i = 0; i < dp.size(); i++)
    {
        dp[i] = -1;
    }

    cout << fib(n, dp) << endl;
    return 0;
}