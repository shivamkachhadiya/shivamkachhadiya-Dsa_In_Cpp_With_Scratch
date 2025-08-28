#include <iostream>
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

void inorder(Node *root, vector<int> &data)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, data);
    data.push_back(root->data);
    inorder(root->right, data);
}
void kthsmallest(vector<int> &data, int k)
{
    cout << "kth smallest is" << data[k - 1];
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
    vector<int> data;
    inorder(root, data);
    kthsmallest(data, 4); // 4th smallest
    return 0;
}