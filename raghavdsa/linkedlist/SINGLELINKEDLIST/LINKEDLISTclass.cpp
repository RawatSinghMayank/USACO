#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    // void insert(int val)
    // {
    //     Node *temp = new Node(val);
    //     if (size == 0)
    //     {
    //         head = tail = temp;
    //     }
    //     else
    //     {
    //         tail->next = temp;
    //         tail = temp;
    //     }
    // }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        } // 10  20 30 40
        cout << endl;
    }
    void inserAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InserAtparticularIndex(int idx, int n)
    {
        if (idx < 0 || idx > size)
            cout << "invalid" << endl;
        else if (idx == 0)
            inserAtHead(n);
        else if (idx == size)
            insertAtTail(n);
        else
        {
            Node *newnode = new Node(n);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            size++;
        }
    }
    int getValue(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "invalid" << endl;
        if (idx == 0)
            return head->val;
        if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }

            return temp->val;
        }
    }
    void deleteAtHead()
    {
        Node *temp = head;
        if (size == 0)
        {
            cout << "list is empty" << endl;
            return;
        }
        else
        {
            head = head->next;
            // free(temp);
            // OR
            delete temp;
            size--;
        }
    }
    void deleteAtTail()
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleatAtaParticularidx(int idx)
    {
        if (size == 0)
            return;

        if (idx < 0 || idx >= size)
            return;
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
            return deleteAtHead();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main()
{
    LinkedList ll;
    // ll.insert(1);
    // ll.insert(1);
    // ll.insert(1);
    // ll.insert(1);
    // ll.insert(1);
    // ll.display();
    ll.insertAtTail(90);
    ll.display();
    ll.insertAtTail(100);
    ll.insertAtTail(120);
    ll.insertAtTail(1200);
    ll.display();
    // cout << "inserting at head " << endl;
    // ll.inserAtHead(1000);
    // ll.display();
    // cout << "inserting at tail " << endl;
    // ll.insertAtTail(1000);
    // ll.display();
    // ll.InserAtparticularIndex(4, -90);
    // ll.display();
    // cout << "get value at index is "
    //      << ll.getValue(3) << endl;
    // ll.deleteAtHead();
    // ll.display();
    // ll.deleteAtTail();
    // ll.display();
    // ll.deleatAtaParticularidx(3);
    // ll.display();
    ll.deleteAtHead();
    ll.display();
    return 0;
}