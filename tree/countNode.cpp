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
        left = NULL;
        right = NULL;
    }
};

int countNode(Node *root, int &count)
{
    if (root == NULL)
        return count;
    if (root->left)
    {
        count++;
        countNode(root->left, count);
    }
    if (root->right)
    {
        count++;
        countNode(root->right, count);
    }
    return count;
}
int main()
{
    Node *root = new Node(0);
    root->left = new Node(10);
    root->right = new Node(22);
    root->left->left = new Node(33);
    root->left->right = new Node(90);
    int count = 0;
    int ans = countNode(root, count);
    cout << "number of nodes is =>" << ans + 1;
    return 0;
}