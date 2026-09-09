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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    } // 10  20 30 40
    cout << endl;
}
// size of linked list
int size(Node *head)
{
    int a = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        a++;
        temp = temp->next;
    }
    return a;
}
void insertAtend(Node *head, int val)
{
    Node *x = new Node(val);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = x;
}
int main()
{

    Node *x = new Node(10);

    Node *y = new Node(20);

    Node *yy = new Node(30);

    Node *xx = new Node(40);
    x->next = y;
    y->next = yy;
    yy->next = xx;
    Node *temp = x;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next; // 10 20 30 40
    }
    cout << endl
         << x->next->next->next->val; // 40
    cout << endl;
    display(x);
    cout << "size of the linked list is :" << size(x) << endl; // 4
    cout << "inserting by only knowing head" << endl;
    insertAtend(x, 90);
    display(x);
    return 0;
}
