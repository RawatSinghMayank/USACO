#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

public:
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

void display(Node *head)
{
    if (head == NULL)
        return;
    cout << head->value << " ";
    display(head->next);
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    return 0;
}