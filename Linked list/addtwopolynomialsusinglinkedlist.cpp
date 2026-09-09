#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int val1;
    int val2;
    struct Node *next;
} Node;
Node *LikeAConstructor(int ele1, int ele2)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->val1 = ele1;
    temp->val2 = ele2;
    temp->next = NULL;
    return temp;
}
Node *CreateLinkedlist(Node *head, int ele1, int ele2)
{
    Node *temp = LikeAConstructor(ele1, ele2);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}
Node *AdditionOfPolynomials(Node *head1, Node *head2)
{

    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *ans = LikeAConstructor(-1, -1);
    Node *dummy = ans;
    while (temp1 != NULL && temp2 != NULL)
    {

        if (temp1->val2 > temp2->val2)
        {
            Node *t = LikeAConstructor(temp1->val1, temp1->val2);
            ans->next = t;
            ans = ans->next;
            temp1 = temp1->next;
        }
        else if (temp1->val2 == temp2->val2)
        {
            Node *t = LikeAConstructor(temp2->val1 + temp1->val1, temp2->val2);
            ans->next = t;
            ans = ans->next;
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        else
        {
            Node *t = LikeAConstructor(temp2->val1, temp2->val2);
            ans->next = t;
            ans = ans->next;
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL)
    {
        Node *t = LikeAConstructor(temp1->val1, temp1->val2);
        ans->next = t;
        ans = ans->next;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        Node *t = LikeAConstructor(temp2->val1, temp2->val2);
        ans->next = t;
        ans = ans->next;
        temp2 = temp2->next;
    }
    return dummy->next;
}

string converttoPolynomial(Node *head)
{
    string str;
    Node *temp = head;
    int x = 0;
    while (temp != NULL)
    {

        str += to_string(temp->val1) + "x^" + to_string(temp->val2) + "+";
        temp = temp->next;
    }
    str.pop_back();
    return str;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    head1 = CreateLinkedlist(head1, 34, 5);
    head1 = CreateLinkedlist(head1, 22, 4);
    head1 = CreateLinkedlist(head1, 23, 2);
    head1 = CreateLinkedlist(head1, -43, 0);

    head2 = CreateLinkedlist(head2, 23, 4);
    head2 = CreateLinkedlist(head2, -23, 3);
    head2 = CreateLinkedlist(head2, -24, 2);
    head2 = CreateLinkedlist(head2, -3, 1);

    string str1 = converttoPolynomial(head1);
    printf("Equation first  :");
    cout << str1;
    printf("\nSecond equation  :");
    string str2 = converttoPolynomial(head2);
    cout << str2;
    printf("\nFinal equation after addition  :");
    Node *ans = AdditionOfPolynomials(head1, head2);
    string finalans = converttoPolynomial(ans);
    cout << finalans;
    return 0;
}