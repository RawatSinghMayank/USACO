#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
void push(char st[], int *top, char ele, int n)
{
    if ((*top) == n - 1)
    {
        printf("Stack overflow: ");
    }
    else
    {
        (*top)++;
        st[(*top)] = ele;
    }
}
int pop(char st[], int *top)
{
    int x = -1;
    if ((*top) == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        x = st[(*top)];
        (*top)--;
    }
    return x;
}
int peak(char st[], int top, int pos)
{
    int x = -1;
    if (top - pos + 1 < 0)
    {
        printf("Invalid positon");
    }
    else
    {
        x = st[top - pos + 1];
    }
    return x;
}
int Top(char st[], int top)
{
    if (top == -1)
        return -1;
    return st[top];
}
bool isEmpty(char st[], int top)
{
    if (top == -1)
        return true;
    return false;
}
bool isFull(char st[], int top, int n)
{
    if (top == n - 1)
        return true;
    return false;
}
void display(char st[], int top)
{
    printf("\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", st[i]);
    }
    printf("\n");
}
bool checkisBalanced(char str[])
{
    int n = strlen(str);
    char st[n];
    int top = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
            push(st, &top, str[i], n);
        else if (str[i] == ')' && top == -1)
            return false;
        else if (str[i] == ')')
            pop(st, &top);
    }
    if (isEmpty(st, top))
        return true;
    return false;
}
bool checkisBalanced2(char str[])
{
    int n = strlen(str);
    char st[n];
    int top = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(st, &top, str[i], n);
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (isEmpty(st, top))
                return false;

            if (str[i] == '}' && Top(st, top) == '{')
                pop(st, &top);
            if (str[i] == ']' && Top(st, top) == '[')
                pop(st, &top);
            if (str[i] == ')' && Top(st, top) == '(')
                pop(st, &top);
        }
    }
    if (isEmpty(st, top))
        return true;
}
int main()
{
    char str[10000];
    printf("Enter the string:");
    gets(str);
    if (checkisBalanced2(str))
        printf("balanced");
    else
        printf("Unbalanced");

    return 0;
}