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
int search(Node *head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

Node *removehead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
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
Node *deletetail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *pre = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {

            pre->next = pre->next->next;
            free(temp);
            break;
        }

        pre = temp;
        temp = temp->next;
    }
    return head;
}
Node *removeelement(Node *head, int ele)
{
    if (head == NULL)
        return head;
    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *pre = NULL;
    while (temp != NULL)
    {

        if (temp->data == ele)
        {

            pre->next = pre->next->next;
            free(temp);
            break;
        }

        pre = temp;
        temp = temp->next;
    }
    return head;
}
Node *removeelement2(Node *head, int ele)
{
    if (head->data == ele)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next->data == ele)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->next->next == NULL)
    {
        temp->next = NULL;
        return head;
    }
    temp->next = temp->next->next;
    return head;
}
Node *removeDuplicates(Node *head)
{
    Node *xx = head;
    Node *i = head;

    while (i != NULL)
    {
        Node *j = i->next;
        while (j != NULL)
        {

            if (i->data == j->data)
            {
                head = removeelement2(i->next, j->data);
            }
            j = j->next;
        }
        i = i->next;
    }

    return xx;
}

Node *del(Node *head, Node *todelete)
{
    if (todelete == NULL || todelete->next == NULL)
        return NULL;
    if (todelete == head)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp->next != todelete)
    {
        temp = temp->next;
    }
    if (temp->next->next == NULL)
    {
        temp->next = NULL;
        return head;
    }
    temp->next = temp->next->next;
    return head;
}
int main()
{
    vector<int> arr = {3, 3, -1};
    Node *head = converarraytolinkedlist(arr);
    // // cout << search(head, 15) << endl;
    // print(head);
    // // cout << "after deleting head" << endl;
    // // head = removehead(head);
    // // print(head);
    // // head = deletetail(head);
    // // print(head);
    // // head = removeK(head, 5);
    // // print(head);
    // // cout << "remove element" << endl;

    // // // head = removeelement(head, 15);
    // deletetail(head);
    head = del(head, head->next->next);
    print(head);
    return 0;
}