#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *next;
    int val;

} Node;
Node *getValue(int val)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}
void insertSorted(Node **head, int val)
{
    Node *newnode = getValue(val);
    Node *temp = *head;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    else if (val < (*head)->val)
    {
        newnode->next = *head;
        *head = newnode;
        return;
    }
    else
    {

        while (temp->next)
        {
            if (temp->next->val < val)
            {
                temp = temp->next;
            }
            else
            {
                newnode->next = temp->next;
                temp->next = newnode;
                return;
            }
        }
    }
    temp->next = newnode;
}
Node *search(Node *head, int key)
{
    while (head)
    {
        if (head->val == key)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}
void display(Node *head)
{
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
}
