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
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    printf("Node deleted %d", temp->val);
    free(temp);
    return head;
}
Node *deleteEnd(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *x = temp->next;

    temp->next = NULL;
    printf("Node deleted %d", x->val);
    free(x);
    return head;
}
Node *deleteAnywhere(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    int counter = 0;
    if (k == 1)
    {
        Node *x = head;
        head = deleteFront(head);
        free(x);
        printf("Node deleted %d", x->val);

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
            printf("Node deleted %d", x->val);

            return head;
        }
        temp = temp->next;
    }
    Node *todelete = temp;
    head = deleteEnd(head);
    printf("Node deleted %d", todelete->val);

    free(todelete);
    return head;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
int size(Node *head)
{
    int c = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
bool isEmpty(Node *head)
{
    return head == NULL;
}
Node *findMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    Node *head = NULL;
    printf("\n Press :");
    printf("\n1 -insert node at front ");
    printf("\n 2 -insert node at end ");
    printf("\n  3 -insert node at specific position ");
    printf("\n 4 -delete  node from front ");
    printf("\n 5 -delete node from end ");
    printf("\n 6 -delete  node from specific ");
    printf("\n 7 -find size of linked list");
    printf("\n 8 To check if the linked list is empty or not ");
    printf("\n 9 -find middle element of the list ");
    printf("\n 10- exit");
    int choice;

    do
    {
        printf("\nEnter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nEnter the value :");
            int x;
            scanf("%d", &x);
            head = insertFront(head, x);
            printf("Linked list: ");
            display(head);
            break;
        }

        case 2:
        {
            int x;
            printf("\nEnter the value :");
            scanf("%d", &x);
            head = insertLast(head, x);
            printf("Linked list: ");
            display(head);
            break;
        }
        case 3:
        {
            int x;
            printf("\nEnter the value :");
            scanf("%d", &x);
            printf("\n Enter the position:");
            int y;
            scanf("%d", &y);
            head = InsertAnywhere(head, x, y);
            printf("Linked list: ");
            display(head);
            break;
        }
        case 4:
        {
            head = deleteFront(head);

            printf("\nLinked list after deletion - ");
            printf("Linked list: ");
            display(head);

            break;
        }

        case 5:
        {
            head = deleteEnd(head);
            printf("\nLinked list after deletion - ");
            printf("Linked list: ");
            display(head);
            break;
        }
        case 6:
        {
            printf("\nEnter the position");
            int x;
            scanf("%d", &x);
            head = deleteAnywhere(head, x);
            printf("Linked list after deletion - ");
            printf("Linked list: ");
            display(head);
            break;
        }
        case 7:
        {
            printf("%d", size(head));
            printf("\n");
            printf("Linked list: ");
            display(head);
            break;
        }
        case 8:
        {
            if (isEmpty(head))
                printf("\nLinked list is empty ");
            else
                printf("\nLinked list is not empty");
            break;
        }
        case 9:
        {

            printf("Middle of the linked list is :%d", findMiddle(head)->val);
            break;
        }

        default:
        {

            break;
        }
            printf("%d", head->val);
        }
    } while (choice != 10);
    return 0;
}