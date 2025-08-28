#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

void solve(Node *root, int target, vector<int> &path, int &count)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->data);
    // for (auto i : path)
    // {
    //     cout << i;
    //     cout << " ";
    // }
    solve(root->left, target, path, count);
    solve(root->right, target, path, count);
    int size = path.size();
    long long sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        sum = sum + path[i];
        if (sum == target)
        {
            count = count + 1;
        }
    }

    path.pop_back();
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->left->left = new Node(1);
    root->right = new Node(3);
    root->left->right = new Node(2);

    vector<int> path;
    int count = 0;
    int target = 5;
    solve(root, target, path, count);
    cout << "total count " << count;
}