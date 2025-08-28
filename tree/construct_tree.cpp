#include <iostream>
#include <vector>
#include <map>
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
void createMapping(vector<int> inorder, map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[inorder[i]] = i;
    }
}

Node *solve(vector<int> inorder, vector<int> preorder, int &index, int inorderstart,
            int inorderend, int n, map<int, int> &nodeToIndex)
{
    if (index >= n || inorderstart > inorderend)
    {
        return NULL;
    }
    
    int element = preorder[index];
    index++;
    Node *root = new Node(element);
    int position = nodeToIndex[element];
    root->left = solve(inorder, preorder, index, inorderstart, position - 1, n, nodeToIndex);
    root->right = solve(inorder, preorder, index, position + 1, inorderend, n, nodeToIndex);
    return root;
}

void treaverse(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    treaverse(root->left);
    treaverse(root->right);
}
int main()

{
    int preorderIndex = 0;
    vector<int> inorder = {1, 6, 8, 7};
    vector<int> preorder = {1, 6, 7, 8};
    int n = inorder.size();

    map<int, int> nodeToIndex;
    createMapping(inorder, nodeToIndex, n);

    Node *ans = solve(inorder, preorder, preorderIndex, 0, n - 1, n, nodeToIndex);
    cout << "tree created....";

    cout << "tree preorder traversal after creating from inorder and postorder==>" << endl;
    treaverse(ans);
}