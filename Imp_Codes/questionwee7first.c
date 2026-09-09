#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
Node *create(int v)
{
    Node *x = (Node *)malloc(sizeof(Node));
    x->val = v;
    x->next = NULL;
    return x;
}

Node *insertLast(Node *head, int val)
{
    Node *x = create(val);
    if (head == NULL)
    {
        head = x;
    }
    else
    {
        Node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = x;
    }
    return head;
}
Node *insertFront(Node *head, int val)
{
    Node *x = create(val);
    if (head == NULL)
    {
        head = x;
    }
    else
    {
        x->next = head;
        head = x;
        x = x->next;
    }
    return head;
}
Node *InsertAnywhere(Node *head, int val, int k)
{
    int counter = 0;
    if (k == 1)
    {
        head = insertFront(head, val);
        return head;
    }
    Node *temp = head;
    Node *value = create(val);
    while (temp->next != NULL)
    {
        counter++;
        if (counter == k - 1)
        {
            value->next = temp->next;
            temp->next = value;
            return head;
        }
        temp = temp->next;
    }
    temp->next = value;
    return head;
}
Node *deleteFront(Node *head)
{
    Node *x = head;
    head = head->next;
    free(x);
    return head;
}
Node *deleteEnd(Node *head)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *x = temp->next;

    temp->next = NULL;
    free(x);
}
Node *deleteAnywhere(Node *head, int k)
{
    int counter = 0;
    if (k == 1)
    {
        Node *x = head;
        head = deleteFront(head);
        free(x);
        return head;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        counter++;
        if (counter == k - 1)
        {
            Node *x = temp->next;
            temp->next = temp->next->next;
            free(x);
            return head;
        }
        temp = temp->next;
    }
    head = deleteEnd(head);
    return head;
}
void display(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
int size(Node *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}
bool isEmpty(Node *head)
{
    return head == NULL;
}
int findMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}
int main()
{
    Node *head = NULL;
    head = insertLast(head, 1);
    head = insertLast(head, 2);
    head = insertLast(head, 3);
    head = insertLast(head, 4);

    display(head);
    printf("%d", findMiddle(head));
}