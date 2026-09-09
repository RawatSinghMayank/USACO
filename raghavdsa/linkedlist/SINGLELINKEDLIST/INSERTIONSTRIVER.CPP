#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
Node *converarraytolinkedlist(vector<int> arr)
{

    Node *head = new Node(arr[0]);
    Node *t = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        t->next = temp;
        t = temp;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *insertHead(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);

    Node *temp = new Node(val);
    temp->next = head;

    return temp;
    // or
    head = temp;
    return head;
}
Node *insertAtTail(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(val);
    temp->next = newnode;
    return head;
}
Node *insertAtK(Node *head, int k, int el)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(el);
        }
        else
        {
            return head;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(el);
        temp->next = head;
        head = temp;
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *x = new Node(el);
            x->next = temp->next;
            temp->next = x;
        }
        temp = temp->next;
    }

    return head;
}
Node *insertAtBefor(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->data == val)
    {
        Node *temp = new Node(el);
        temp->next = head;
        head = temp;
        return head;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {

        if (temp->next->data == val)
        {
            Node *x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = converarraytolinkedlist(arr);
    print(head);
    head = insertHead(head, 1000);
    print(head);
    insertAtTail(head, 999);
    print(head);
    head = insertAtK(head, 9, 24);
    print(head);
    head = insertAtBefor(head, 499, 33393);
    print(head);
    return 0;
}