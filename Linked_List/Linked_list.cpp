#include<bits/stdc++.h>
#include<list>
using namespace std ;
class Node
{
    public :
    int data ;
    Node* next ;

    Node(int val)
    {
        data= val ;
        next = NULL ;
    }
}; 

class List                            // name conflict list nahi 
{                                     // List sahi hai
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
            newNode -> next = head ;
            head =  newNode ;
        }
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val) ;
        if(head == NULL)
        {
            head = tail = newNode ;
        }
        else
        {
            tail->next = newNode ;  // link karne kai liye
            tail = newNode ;        // tail ko assign karne kai liye
        }
    }

    void pop_front()
    {
        if(head == NULL)
        {
            cout << "Linked List is empty." ;
        }
         else if(head == tail)
    {
        delete head;
        head = tail = NULL;
    }
        else
        {
            Node* temp = head ;
            head = temp->next ;
            temp->next = NULL ;
            delete temp ;
        }
    }

    void pop_back()
    {
        if(head == NULL)
        {
            cout << "Linked List is empty" ;
        }
         else if(head == tail)
    {
        delete head;
        head = tail = NULL;
    }
        else
        {
            Node* temp = head ;
            while(temp->next != tail)
            {
                temp = temp->next ;
            }
            temp->next = NULL; 
            delete tail ;
            tail = temp ;
        }
    }

    void insert(int val , int pos)
    {
    if(pos < 0)
    {
        cout << "Invalid Position";
        return;
    }

    if(pos == 0)
    {
        push_front(val);
        return;
    }

    Node* temp = head;

    for(int i = 0; i < pos-1; i++)
    {
        if(temp == NULL)   //  safety check
        {
            cout << "Position out of bounds"<<endl ;
            return;
        }
        temp = temp->next;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;

    if(newNode->next == NULL)   //  update tail
    {
        tail = newNode;
    }
}
    
    int search(int val)
    {
        Node* temp = head ;
        int idx = 0 ;
        while(temp != NULL)
        {
            if(temp->data==val)
            {
                return idx ;
            }

            temp = temp->next ;
            idx++ ;
        }
        return -1 ;
    }

    void print()
    {
        Node* temp = head ;
        while(temp!=NULL)
        {
            cout << temp->data << " -> " ;
            temp = temp->next ;
        }
        cout << "NULL" << endl  ;
    }
};

int main ()
{
    List ll ; 

    ll.push_front(10) ;
    ll.push_front(20) ;
    ll.push_front(30) ;

    ll.push_back(5) ;
    ll.push_back(4) ;

    ll.pop_front() ;

    ll.pop_back() ;

    ll.insert(7,2) ;

    ll.print() ;
    cout << endl ;

    cout << ll.search(7) ;
    return 0 ;
}