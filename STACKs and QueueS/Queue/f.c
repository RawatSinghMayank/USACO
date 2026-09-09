#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void push(int st[], int ch, int *top, int n)
{
    if ((*top) == n - 1)
        return;
    st[++(*top)] = ch;
}
char pop(int st[], int *top)
{
    if ((*top) == -1)
        return -1;
    int ch = st[*top];
    st[(*top)--];
    return ch;
}
bool isEmpty(int top)
{
    if (top == -1)
        return true;
    return false;
}
int evaluate(int a, int b, char ch)
{
    if (ch == '+')
        return b + a;
    else if (ch == '-')
        return b - a;
    else if (ch == '/')
        return b / a;
    return b * a;
}
int main()
{
    char str[1000];
    gets(str);
    int top = -1;
    int n = strlen(str);
    int st[1000];
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
            continue;
        if (str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-')

        {
            int a = st[top];
            pop(st, &top);
            int b = st[top];
            pop(st, &top);
            int ans = evaluate(a, b, str[i]);
            push(st, ans, &top, n);
        }

        else
        {
            int num = 0;
            while (i < n && isdigit(str[i]))
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;
            push(st, num, &top, n);
        }
    }
    printf("%d", st[top]);
    return 0;
}