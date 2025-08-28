#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void findmaxium(vector<int> &arr)
{
    unordered_map<int, int> map;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;

        if (map[arr[i]] > n / 2)
        {
            cout << "majority element is =>" << arr[i];
        }
    }
}
int main()
{
    vector<int> nums = {3,2,4,5,5,5,5};
    findmaxium(nums);
    return 0;
}