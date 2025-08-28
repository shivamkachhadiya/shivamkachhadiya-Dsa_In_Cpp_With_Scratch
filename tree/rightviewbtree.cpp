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

vector<int> solve(Node *root, vector<int> &rightview, int level)
{
    if (root == NULL)
        return rightview;
    if (rightview.size() == level)
    {
        rightview.push_back(root->data);
    }
    solve(root->right, rightview, level + 1);
    solve(root->left, rightview, level + 1);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->right = new Node(4);

    vector<int> rightview;

    solve(root, rightview, 0);
    for (auto i : rightview)
    {
        cout << i;
    }
}