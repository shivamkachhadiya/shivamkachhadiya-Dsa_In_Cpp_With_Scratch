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

Node *minVal(Node *left)
{
    Node *current = left;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}
Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
        return root;
    if (root->data == key)
    {
        // 0 child delete
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child delete

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child delet

        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }
    }
    else if (root->data > key)
    {
        // go left
        root->left = deleteNode(root->left, key);
        return root;
    }

    else
    {
        // go right

        root->right = deleteNode(root->right, key);
        return root;
    }
    return root;
}
void inorder(Node *root)
{
    Node *temp = root;
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
    root->left = new Node(50);
    root->left->left = new Node(25);
    root->left->right = new Node(70);
    root->left->right->left = new Node(60);
    root->right = new Node(110);
    root->right->right = new Node(120);
    root->right->right->left = new Node(115);
    cout << "original tree" << endl;
    inorder(root);
    deleteNode(root, 50);
    cout << "after delete node" << endl;
    inorder(root);
    return 0;
}