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
public:
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void createCycle()
    {
        if(head != NULL)
            tail->next = head;   
    }

    bool hasCycle()
    {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }

    Node* pos()
    {
        Node* slow = head;
        Node* fast = head;
        bool iscycle = false ;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                iscycle = true ;
                break ;
            }
        }
        if(!iscycle) return NULL ;

        slow = head ;
            while(fast!=slow)
            {
                slow = slow->next ;
                fast = fast->next ;
            }
        return fast ;
    }

    void removeCycle()
{
    Node* slow = head;
    Node* fast = head;

    bool isCycle = false;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            isCycle = true;
            break;
        }
    }

    if(!isCycle) return;

    slow = head;
    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    Node* temp = fast;
    while(temp->next != slow)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}
};

int main()
{
    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);

    ll.createCycle();   

    if(ll.hasCycle())
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle" << endl;

    Node* start = ll.pos();

    if(start != NULL)
        cout << "Cycle starts at: " << start->data << endl;

    return 0;
}
