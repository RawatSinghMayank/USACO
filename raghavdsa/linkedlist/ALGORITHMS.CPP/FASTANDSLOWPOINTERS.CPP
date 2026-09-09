#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    Node *back;
    int val;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->back = NULL;
    }

    Node(int val, Node *back, Node *next)
    {
        this->val = val;
        this->next = next;
        this->back = back;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
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
Node *middleNode(Node *head) // RIGHT MIDDLE =N/2 BY ZERO BASED INDEXING
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *middleNode2(Node *head) // LEFT MIDDLE
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = converarraytolinkedlist(arr);
    // Node *mid = middleNode(head);
    // Node *mid = middleNode2(head);

    print(head);
}