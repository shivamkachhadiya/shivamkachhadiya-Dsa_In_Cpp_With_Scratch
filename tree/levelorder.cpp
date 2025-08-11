#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int v)
    {
        val = v;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(Node *node)
{
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->val;
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(9);

    cout << "preorder is => ";
    preorder(root);
    cout << endl;
}