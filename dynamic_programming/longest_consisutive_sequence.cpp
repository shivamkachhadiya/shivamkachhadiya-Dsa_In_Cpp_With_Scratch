#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void longest_consicutive_sequnce(vector<int> &arr)
{
    unordered_set<int> uset;
    for (int val : arr)
    {
        uset.insert(val);
    }

    int n = uset.size();
    int largest = 1;
    if (n == 0)
        largest = 0;

    for (auto it : uset)
    {
        if (uset.find(it - 1) == uset.end())
        {
            // if element not find
            int count = 1;
            int x = it;
            while (uset.find(x + 1) != uset.end()) // if find element
            {

                x++;
                count++;
            }
            largest = max(largest, count);
        }
    }
    cout << "largest number of sequence is=>" << largest;
}
int main()
{
    vector<int> arr = {100, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 200, 1, 3, 2};
    longest_consicutive_sequnce(arr);
    return 0;
}