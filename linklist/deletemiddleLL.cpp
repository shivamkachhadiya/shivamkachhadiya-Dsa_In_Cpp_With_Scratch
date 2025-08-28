#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

// int count(Node *head)
// {
//     Node *temp = head;
//     int count = 1;
//     while (temp != nullptr)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

void deletemiddle(Node *head)
{
    Node *temp = head;
    Node *slow = head;
    Node *fast = head;
    Node *prev = nullptr;
    while (slow != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;

        slow = slow->next;
    }
    // now slow points middle node
    prev = prev->next->next;

    // int countnodes = count(temp);
    // temp = head;
    // int target = (countnodes) / 2;
}
int main()
{
    Node *head = new Node(0);
    cout << "enter number of nodes you want...";
    int n;
    cin >> n;
    Node *temp = head;
    while (n--)
    {
        int enterdata;
        cin >> enterdata;
        temp->next = new Node(enterdata);
        temp = temp->next;
    }

    printlist(head->next);
    cout << "after delete middle node=>" << endl;
    deletemiddle(head->next);
    printlist(head->next);

    return 0;
}