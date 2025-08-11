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

// Recursive preorder
void preorder_recursive(Node *node, vector<int> &out)
{
    if (!node)
        return;
    out.push_back(node->val);
    preorder_recursive(node->left, out);
    preorder_recursive(node->right, out);
}

// Iterative preorder using stack
vector<int> preorder_iterative(Node *root)
{
    vector<int> out;
    if (!root)
        return out;
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *cur = st.top();
        st.pop();
        out.push_back(cur->val);
        if (cur->right)
            st.push(cur->right);
        if (cur->left)
            st.push(cur->left);
    }
    return out;
}

int main()
{
    // Build the example tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> rec;
    preorder_recursive(root, rec);
    cout << "Recursive preorder: ";
    for (int v : rec)
        cout << v << ' ';
    cout << '\n';

    vector<int> it = preorder_iterative(root);
    cout << "Iterative preorder: ";
    for (int v : it)
        cout << v << ' ';
    cout << '\n';
    return 0;
}
