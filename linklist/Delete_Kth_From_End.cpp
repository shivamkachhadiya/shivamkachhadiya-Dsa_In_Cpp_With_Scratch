#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void DeleteNodeFromEnd(Node *head, int k)
{
    Node *temp = head;
    int count = 1;

    while (count != k - 1)
    {
        temp = temp->next;
        count++;
    }
    temp->next = temp->next->next;
}

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int countelements(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(66);
    head->next->next->next = new Node(22);

    cout << "before deletion..." << endl;
    printlist(head);
    cout << "\n";
    // delete last second
    int count = countelements(head);
    // cout << count << endl;
    int k = 1;
    int target = (count - k) + 1;
    DeleteNodeFromEnd(head, target);
    cout << "after deletion..." << endl;

    // print list
    printlist(head);
    return 0;
}