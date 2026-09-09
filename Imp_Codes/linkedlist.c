#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *next;
    int val;

} Node;
Node *create(int v)
{
    Node *x = (Node *)malloc(sizeof(Node));
    x->val = v;
    x->next = NULL;
    return x;
}
void createlinkedlist(Node **head, int val)
{
    Node *x = create(val);
    if (*head == NULL)
    {
        *head = x;
    }
    else
    {
        x->next = *head;
        *head = x;
    }
}
void count(Node **head, int *x)

{
    Node *temp = *head;
    while (temp != NULL)
    {
        if (temp->val > 0)
        {
            (*x)++;
        }
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    createlinkedlist(&head, -2);

    createlinkedlist(&head, -2);

    createlinkedlist(&head, 3);

    createlinkedlist(&head, -4);
    createlinkedlist(&head, -3);
    int x = 0;
    count(&head, &x);
    printf("%d", x);
}