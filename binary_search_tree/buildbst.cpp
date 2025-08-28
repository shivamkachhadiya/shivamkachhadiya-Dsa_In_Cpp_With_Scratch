#include <iostream>
#include <climits>
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

Node *solve(vector<int> &preorder, int mini, int maxi, int &index)
{
    if (index >= preorder.size())
        return NULL;
    if (preorder[index] < mini || preorder[index] > maxi)
        return NULL;

    Node *root = new Node(preorder[index]);
    index++;
    root->left = solve(preorder, mini, root->data, index);
    root->right = solve(preorder, root->data, maxi, index);
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    vector<int> preorder = {20, 10, 5, 15, 13, 35, 30, 42};
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    Node *treeRoot = solve(preorder, mini, maxi, i);
    cout << "tree constructed successfully..." << endl;
    cout << "after construct tree print in order....";
    inorder(treeRoot);
    return 0;
}