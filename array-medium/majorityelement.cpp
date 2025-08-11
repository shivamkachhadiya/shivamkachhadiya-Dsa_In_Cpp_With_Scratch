#include <iostream>
#include <unordered_map>
using namespace std;

void majorelement(int arr[], int n) {
    unordered_map<int, int> freq;
    int majority = n / 2;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > majority) {
            cout << "Majority element is: " << arr[i] << endl;
            return;
        }
    }

    // This won't be reached as problem guarantees majority exists
    cout << "No majority element found." << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    majorelement(arr, n);
}
