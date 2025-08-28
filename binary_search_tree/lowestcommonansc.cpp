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

    cout<<"lca is =>"cout

    return 0;
}