#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int val, Node *next, Node *prev)
    {
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
};
Node *constructDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *pre = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->prev = pre;
        temp->next = NULL;
        pre->next = temp;
        pre = pre->next;
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
Node *insertAtHead(Node *head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    return temp;
}
Node *insertBeforeTail(Node *head, int val)
{
    if (head->next == NULL)
        return insertAtHead(head, val);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *back = temp->prev;
    Node *i = new Node(val, temp, back);
    temp->prev = i;
    back->next = i;
    return head;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 0};
    Node *head = constructDLL(v);
    print(head);
    head = insertAtHead(head, -1);
    print(head);
    head = insertBeforeTail(head, -1);
    print(head);
    return 0;
}
