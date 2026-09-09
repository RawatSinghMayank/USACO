

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct stack
{
  char *arr;
  int size;
  int top;
} stack;

stack *create(int size)
{
  stack *st = (stack *)malloc(sizeof(stack));
  st->size = size;
  st->top = -1;
  st->arr = (char *)malloc(sizeof(char) * st->size);
  return st;
}

bool isEmpty(stack *st)
{
  return st->top == -1;
}

int precedence(char ch)
{
  if (ch == '^')
    return 3;
  else if (ch == '*' || ch == '/')
    return 2;
  else if (ch == '-' || ch == '+')
    return 1;
  return 0;
}

void push(stack *st, char val)
{
  if (st->top == st->size - 1)
    return;
  st->arr[++(st->top)] = val;
}

char pop(stack *st)
{
  if (st->top == -1)
    return -1;
  return st->arr[(st->top)--];
}

char *convertInfixtoPostfix(char *str)
{
  int n = strlen(str);
  stack *st = create(n);
  char *ans = (char *)malloc(sizeof(char) * (st->size));
  int idx = 0;

  for (int i = 0; i < n; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
    {
      ans[idx++] = str[i];
    }
    else if (str[i] == '(')
      push(st, str[i]);
    else if (str[i] == ')')
    {
      while (!isEmpty(st) && st->arr[st->top] != '(')
      {
        ans[idx++] = st->arr[st->top];
        pop(st);
      }
      pop(st);
    }
    else
    {
      while (!isEmpty(st) && precedence(st->arr[st->top]) >= precedence(str[i]))
      {
        ans[idx++] = st->arr[st->top];
        pop(st);
      }
      push(st, str[i]);
    }
  }

  while (!isEmpty(st))
  {
    ans[idx++] = st->arr[st->top];
    pop(st);
  }
  ans[idx] = '\0';

  return ans;
}

// Function to convert infix expression to postfix expression
char *infixToPostfix(char *s)
{
  return convertInfixtoPostfix(s);
}