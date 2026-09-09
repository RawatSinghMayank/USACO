
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
// Node *reverseList(Node *head) //  BY recursion
// {
//     if (head == NULL || head->next == NULL)
//         return head;
//     Node *newhead = reverseList(head->next);
//     Node *temp = head->next;
//     temp->next = head;
//     head->next = NULL;
//     return newhead;
// }
Node *reverseList(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
int main()
{
    vector<int> arr = {
        2,
        3,
        3,
        5,
        3,
        56,
        3,
    };
    Node *head = converarraytolinkedlist(arr);
    // cout << search(head, 15) << endl;
    // print(head);
    // cout << "after deleting head" << endl;
    // head = removehead(head);
    // print(head);
    // head = deletetail(head);
    // print(head);
    // head = removeK(head, 5);
    // print(head);
    // cout << "remove element" << endl;

    // head = removeelement(head, 15);
    // deletetail(head);
    head = reverseList(head);
    print(head);

    return 0;
}
