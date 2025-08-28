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

Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    // return key if already exist in tree
    if (root->data == key)
    {
        return root;
    }

    if (root->data < key) // 40
    {
        root->right = insert(root->right, key);
    }
    else
    {
        root->left = insert(root->left, key);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = new Node(100);
    root->left = new Node(20);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right = new Node(500);

    // print in order traversal
    cout << "before insertion inorder is=>" << endl;
    inorder(root);

    // call insert function
    insert(root, 40);

    cout << "after insertion inorder is" << endl;

    inorder(root);
}