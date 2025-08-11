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

class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void printall()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
    void deletelast()
    {
        Node *tmp = head;
        if (head == NULL)
        {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        while (tmp->next->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = NULL;
    }
};

int main()
{
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.printall();
    l.deletelast();
    cout << endl << "After deleting the last element:" << endl;
    l.printall();       
    cout << "push all done" << endl;
}