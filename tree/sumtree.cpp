#include <iostream>
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
pair<bool, int> isSum(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = isSum(root->left);
    pair<bool, int> rightAns = isSum(root->right);

    bool cond = root->data == leftAns.second + rightAns.second;
    pair<bool, int> ans;
    if (cond)
    {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}
int main()
{
    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);

    cout << isSum(root).first;
}