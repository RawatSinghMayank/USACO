#include <bits/stdc++.h>
using namespace std;
typedef struct Stack
{
    int top;
    int size;
    int *arr;
} Stack;
Stack *create(int s)
{
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->top = -1;
    st->size = s;
    st->arr = (int *)malloc(sizeof(int) * s);
    return st;
}
void push(Stack *st, int val)
{
    if (st->top >= st->size - 1)
    {
        cout << "Stack is full " << endl;
    }
    else
    {
        st->arr[++(st->top)] = val;
    }
}
int pop(Stack *st)
{
    if (st->top == -1)
    {
        cout << "Stack is empty" << endl;

        return -1;
    }
    return st->arr[(st->top)--];
}
void display(Stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        cout << st->arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    Stack *st = create(10);
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);
    push(st, 50);
    push(st, 60);
    push(st, 70);
    push(st, 80);
    push(st, 90);
    push(st, 100);
    push(st, 101);
    display(st);
    cout << pop(st) << endl;
    cout << pop(st) << endl;
    display(st);
    push(st, -999);
    display(st);
    return 0;
}