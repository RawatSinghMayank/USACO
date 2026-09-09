#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    struct Node *next;
    int val;
} Node;
typedef struct Stack
{
    Node *top;

} Stack;
Node *create(int v)
{
    Node *x = (Node *)malloc(sizeof(Node));

    x->next = NULL;
    x->val = v;
    return x;
}
Stack *createS()
{
    Stack *x = (Stack *)malloc(sizeof(Stack));
    x->top = NULL;
    return x;
}
Stack *push(Stack *st, int val)
{
    Node *x = create(val);
    if (st->top == NULL)
    {
        st->top = x;
    }
    else
    {
        x->next = st->top;
        st->top = x;
    }
    return st;
}
int pop(Stack *st)
{
    if (st->top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    int g = st->top->val;
    Node *x = st->top;
    st->top = st->top->next;
    free(x);
    return g;
}
void display(Stack *st)
{
    printf("Stack : ");
    Node *temp = st->top;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    Stack *st = createS();
    st = push(st, 1);
    st = push(st, 2);
    st = push(st, 3);
    display(st);
    cout << pop(st) << endl;
    cout << pop(st) << endl;
    push(st, 4);
    push(st, 5);
    display(st);
    return 0;
}
