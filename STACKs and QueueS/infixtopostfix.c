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
char pop(char st[], int *top)
{
    char x = -1;
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
char Top(char st[], int top)
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
int precedence(char a)
{
    if (a == '+' || a == '-')
        return 1;
    else if (a == '*' || a == '/')
        return 2;
    return 0;
}
char *ans(char str[])
{

    int n = strlen(str);
    static char newstr[1000];
    char st[n];
    int top = -1;

    int j = 0;
    for (int i = 0; i < n;)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (isEmpty(st, top))
            {
                push(st, &top, str[i], n);
                i++;
            }
            else if (precedence(str[i]) > precedence(Top(st, top)))
            {
                push(st, &top, str[i], n);
                i++;
            }
            else
            {
                newstr[j++] = pop(st, &top);
            }
        }
        else
        {

            newstr[j++] = str[i];
            i++;
        }
    }
    while (!isEmpty(st, top))
    {
        newstr[j++] = pop(st, &top);
    }
    newstr[j] = '\0';
    return newstr;
}
int main()
{
    char str[1000];
    gets(str);
    char newstr[1000];
    char *a = ans(str);
    puts(a);
}