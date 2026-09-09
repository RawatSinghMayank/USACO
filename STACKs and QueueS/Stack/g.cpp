
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 2;
    }
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}
void push(char st[], char ch, int *top)
{
    st[++(*top)] = ch;
}
char pop(char st[], int *top)
{
    char ch = st[*top];
    st[(*top)--];
    return ch;
}
bool Empty(int top)
{
    if (top == -1)
        return true;
    return false;
}

void convert(char s[])
{
    int n = strlen(s);
    char st[n];
    int top = -1;
    char ans[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ans[x++] = s[i];
        }

        else if (s[i] == '(')
        {
            push(st, s[i], &top);
        }
        else if (s[i] == ')')
        {
            while (!Empty(top) && st[top] != '(')
            {
                ans[x++] = st[top];
                pop(st, &top);
            }
            pop(st, &top);
        }
        else
        {
            while (!Empty(top) && precedence(s[i]) <= precedence(st[top]))
            {
                ans[x++] = st[top];
                pop(st, &top);
            }
            push(st, s[i], &top);
        }
    }
    while (!Empty(top))
    {
        ans[x++] = st[top];
        pop(st, &top);
    }
    ans[x] = '\0';
    puts(ans);
}
int main()
{
    char ch[10000];
    gets(ch);
    convert(ch);
    return 0;
}
