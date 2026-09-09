#include <bits\stdc++.h>
using namespace std;
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
typedef struct Queue
{

    Node *front;
    Node *rear;
} Queue;
Queue *createQ()
{
    Queue *q = (Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
Node *create(int v)
{
    Node *x = (Node *)malloc(sizeof(Node));

    x->next = NULL;
    x->val = v;
    return x;
}

Queue *Enqueue(Queue *q, int val)
{
    Node *x = create(val);
    if (q->front == NULL && q->rear == NULL)
    {
        q->front = x;
        q->rear = x;
    }

    else
    {
        q->rear->next = x;
        q->rear = q->rear->next;
    }
    return q;
}
int Dequeue(Queue *q)
{
    if (q->front == NULL && q->rear == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    Node *x = q->front;
    int val = x->val;
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->front = q->rear = NULL;
    }
    free(x);
    return val;
}
void display(Queue *q)
{
    Node *temp = q->front;
    printf("Queue -");
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    Queue *q = createQ();
    Enqueue(q, 10);
    Enqueue(q, 20);

    Enqueue(q, 30);
    display(q);
    cout << Dequeue(q) << endl;
    cout << Dequeue(q) << endl;
    display(q);
    return 0;
}