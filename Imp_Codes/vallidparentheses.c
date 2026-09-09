#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void push(char st[], int *top, int size, char ch)
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

char pop(char st[], int *top)
{
    if (*top == -1)
    {
        return -1;
    }
    return st[(*top)--];
}

void display(char st[], int top)
{
    for (int i = top; i >= 0; i--)
    {
        printf("%c ", st[i]);
    }
}

bool isEmpty(char st[], int *top)
{
    return *top == -1;
}

bool check(char ch[])
{

    int top = -1;
    char st[10000];
    int n = 10000;

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == '{' || ch[i] == '[' || ch[i] == '(')
            push(st, &top, n, ch[i]);
        else
        {
            if (isEmpty(st, &top))
                return false;
            else if (ch[i] == '}' && st[top] == '{')
                pop(st, &top);
            else if (ch[i] == ']' && st[top] == '[')
                pop(st, &top);
            else if (ch[i] == ')' && st[top] == '(')
                pop(st, &top);
            else
                return false;
        }
    }
    if (isEmpty(st, &top))
        return true;
    return false;
}

int main()
{
    char ch[10000];
    gets(ch);
    if (check(ch))
    {
        printf("valid ");
    }
    else
    {
        printf("not valid ");
    }
    return 0;
}