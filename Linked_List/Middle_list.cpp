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
    int size()
    {
        Node* temp = head ;
        int ct = 0 ;
        while(temp!=NULL)
        {
            ct++ ;
            temp = temp->next ;
        }
        return ct ;
    }

    Node* middle()  
    {               
        int n = size() ;
        Node* temp = head ;
        for(int i = 0 ; i  < n/2 ; i++)
        {
            temp = temp->next ;
        }
        return temp ;
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
    List ll;
    ll.push_front(10) ;
    ll.push_front(20);
    ll.push_front(30) ;
    ll.push_front(40) ;

    Node* mid = ll.middle();

    if(mid != NULL)
        cout << "Middle element: " << mid->data << endl;
}