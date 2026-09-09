// #include <bits/stdc++.h>
// using namespace std;
// typedef struct Queue
// {
//     int front, rear;
//     int size;
//     int *arr;
// } Queue;
// Queue *create(int s)
// {
//     Queue *q = (Queue *)malloc(sizeof(Queue));
//     q->front = q->rear = -1;
//     q->size = s;

//     q->arr = (int *)malloc(sizeof(int) * s);
//     return q;
// }
// void push(Queue *q, int val)
// {
//     if (q->rear >= q->size - 1)
//     {
//         cout << "Queue is full " << endl;
//         return;
//     }
//     else if (q->front == -1)
//     {
//         q->front = q->rear = 0;
//     }
//     else
//         ++q->rear;
//     q->arr[q->rear] = val;
// }
// int pop(Queue *q)
// {
//     if (q->front == -1)
//     {
//         cout << "Queue is empty" << endl;

//         return -1;
//     }
//     int x = q->arr[q->front];
//     if (q->front == q->rear)
//     {
//         q->front = q->rear = -1;
//     }
//     else
//     {
//         q->front++;
//     }
//     return x;
// }
// void display(Queue *q)
// {
//     for (int i = q->front; i <= q->rear; i++)
//     {
//         cout << q->arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     Queue *q = create(3);
//     push(q, 10);
//     push(q, 20);
//     push(q, 30);
//     display(q);
//     cout << pop(q) << endl;
//     cout << pop(q) << endl;
//     display(q);
//     push(q, -999);
//     display(q);
//     return 0;
// }
