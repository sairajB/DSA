#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchInLinkedList(int target, Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtTail(30, head, tail);
    insertAtTail(40, head, tail);

    cout << searchInLinkedList(120, head) << endl; // 1 (true)

    printLinkedList(head);
}