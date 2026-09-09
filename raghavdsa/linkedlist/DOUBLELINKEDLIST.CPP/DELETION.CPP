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
Node *converarrtoDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *pre = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], pre, NULL);
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
Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL; // or return head;
    Node *temp = head;
    head = head->next;
    head->back = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *pre = tail->back;
    tail->back = NULL;
    pre->next = NULL;
    delete (tail);
    return head;
}
Node *deleteatK(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        if (c == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *pre = temp->back;
    Node *front = temp->next;
    if (pre == NULL && front == NULL)
    { // can also write this line delete(temp); but after deleting dll will be empty so directly returning NULL
        return NULL;
    }
    else if (pre == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
        return deleteTail(head);
    pre->next = front;
    front->back = pre;
    temp->back = NULL;
    temp->next = NULL;
    delete temp;

    return head;
}
void deleteaparticularNode(Node *val)
{ //   GIVEN HEAD  CANNOT BE DELETED
    Node *front = val->next;

    Node *behind = val->back;
    if (front == NULL)
    {
        behind->next = NULL;
        val->back == NULL;
        free(val);
        return;
    }
    behind->next = front;
    front->back = behind;
    val->next = val->back = NULL;
    free(val);
    return;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    Node *head = converarrtoDLL(v);
    print(head);
    head = deleteHead(head);
    print(head);
    head = deleteTail(head);
    print(head);
    head = deleteatK(head, 2);
    print(head);
    deleteaparticularNode(head->next->next->next->next->next->next);
    print(head);
    return 0;
}
