#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void push(int st[], int *top, int size, int ch)
{
    if (*top == size - 1)
    {
        printf("fULL");
        return;
    }
    else
    {
        st[++(*top)] = ch;
        return;
    }
}

int pop(int st[], int *top)
{
    if (*top == -1)
    {
        return -1;
    }
    return st[(*top)--];
}

void display(int st[], int *top)
{
    while (*top != -1)
    {
        printf("%d ", st[*top]);
        pop(st, top);
    }
}

void displayfifoorder(int st[], int *top)
{
    int st1[1000];
    int top1 = -1;
    while (*top != -1)
    {
        push(st1, &top1, 1000, st[*top]);
        pop(st, top);
    }
    while (top1 != -1)
    {
        printf("%d ", st1[top1]);
        pop(st1, &top1);
    }
}
bool isEmpty(int st[], int *top)
{
    return *top == -1;
}

int main()
{
    int st[1000];
    int n;
    int top = -1;
    scanf("Enter number of element in the stack \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        push(st, &top, 1000, x);
    }

    displayfifoorder(st, &top);

    return 0;
}