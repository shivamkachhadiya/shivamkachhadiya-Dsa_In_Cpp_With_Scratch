#include <iostream>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
pair<int, int> solve(TreeNode *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);
    pair<int, int> res;
    res.first = root->data + left.second + right.second;
    res.second = max(left.first, left.second) + max(right.first, right.second);
    return res;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    pair<int, int> ans = solve(root);
    cout << "maximum sum of non adjecent node is =>" << endl;
    cout << max(ans.first, ans.second);
}