#include <iostream>
#include <vector>
using namespace std;

// 3 2 1
void printSequence(vector<int> &arr, vector<int> part, int n, int index, int target, int sum)
{
    if (index == n)
    {
        if (sum == target)
        {
            for (auto it : part)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    part.push_back(arr[index]);

    sum = sum + arr[index];
    // include
    printSequence(arr, part, n, index + 1, target, sum);

    part.pop_back();

    sum = sum - arr[index];

    printSequence(arr, part, n, index + 1, target, sum);
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> part;
    int target = 5;
    printSequence(arr, part, arr.size(), 0, target, 0);

    return 0;
}