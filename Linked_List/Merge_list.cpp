#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head1;
    Node* tail1;
    Node* head2;
    Node* tail2;

public:
    List()
    {
        head1 = tail1 = NULL;
        head2 = tail2 = NULL; 
    }

    void push_front1(int val)
    {
        Node* newNode = new Node(val);
        if(head1 == NULL)
        {
            head1 = tail1 = newNode;
        }
        else
        {
            newNode->next = head1;
            head1 = newNode;
        }
    }

    void push_front2(int val)
    {
        Node* newNode = new Node(val);
        if(head2 == NULL)
        {
            head2 = tail2 = newNode;
        }
        else
        {
            newNode->next = head2;
            head2 = newNode;
        }
    }

    void merge()
    {
        if(head1 == NULL)
        {
            head1 = head2;
            return;
        }

        Node* temp = head1;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = head2;
    }

    void print()
    {
        Node* temp = head1;
        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List l;

    l.push_front1(3);
    l.push_front1(2);
    l.push_front1(1);

    l.push_front2(6);
    l.push_front2(5);
    l.push_front2(4);

    l.merge();

    l.print();

    return 0;
}