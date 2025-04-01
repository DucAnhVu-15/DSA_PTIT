#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void push(Node *&head, int value)
{ 
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = nullptr;

    push(head, 10);
    push(head, 20);
    push(head, 30);
    push(head, 40);

    printList(head);

    return 0;
}