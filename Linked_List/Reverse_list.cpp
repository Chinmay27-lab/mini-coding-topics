#include<bits/stdc++.h>
using namespace std ;
class Node
{
    public :
    int data ;
    Node* next ;

    Node(int val)
    {
        data = val ;
        next = NULL ;
    }
};

class List
{
    Node* head ;
    Node* tail ;

    public :
    List()
    {
        head = tail = NULL ;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val) ;
        if(head == NULL)
        {
            head = tail = newNode ;
        }
        else
        {
            newNode->next = head ;
            head = newNode ;
        }
    }

    void reverse()
    {
        Node* prev = NULL ;
        Node* curr = head ;
        Node* next = NULL ;
        while(curr!=NULL)
        {
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }

        head = prev ;
    }
    void print()
    {
        Node* temp = head ;
        while(temp!=NULL)
        {
            cout << temp->data << " -> " ;
            temp = temp->next ;
        }
        cout << "NULL" << endl ;
    }
};

int main ()
{
    List ll ;

    ll.push_front(10) ;
    ll.push_front(20) ;
    ll.push_front(30) ;

    cout<<"Original order : " ;
    ll.print() ;

    ll.reverse() ;

    cout<<"Reversed order : " ;
    ll.print() ;
}