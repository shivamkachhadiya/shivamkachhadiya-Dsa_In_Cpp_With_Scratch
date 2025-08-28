#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int countNodes(TreeNode *root)
{
    if (!root)
        return 0;

    int count = 0;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();
        count++;

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }

    return count;
}

int main()
{
    // Example tree:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Number of nodes: " << countNodes(root) << endl;

    return 0;
}
