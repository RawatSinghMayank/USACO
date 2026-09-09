/*Initialize Two Stacks:

operators: For storing operators and parentheses.
operands: For storing tree nodes (subtrees).
Traverse the Infix Expression:

If the character is an operand:
Create a tree node for the operand and push it onto the operands stack.
If the character is an opening parenthesis (:
Push it onto the operators stack.
If the character is a closing parenthesis ):
While the top of operators is not (:
Pop an operator and build a subtree using two nodes from operands.
Push the new subtree onto operands.
Pop the ( from the operators stack.
If the character is an operator:
While the stack is not empty and the precedence of the current operator is less than or equal to the precedence of the operator on top of operators:
Pop an operator and build a subtree using two nodes from operands.
Push the new subtree onto operands.
Push the current operator onto the operators stack.
Finalize the Tree:

While operators is not empty:
Pop an operator and build a subtree using two nodes from operands.
Push the new subtree onto operands.
Root of the Tree:

The root of the tree is the last element in the operands stack..*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode
{
  struct TreeNode *left, *right;
  char ch;
} TreeNode;

TreeNode *createNode(char ch)
{
  TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
  temp->left = temp->right = NULL;
  temp->ch = ch;
  return temp;
}

typedef struct nodestack
{
  TreeNode **arr;
  int top;
  int size;
} nodestack;

void pushnode(nodestack *st, TreeNode *val)
{
  if (st->top == st->size - 1)
    return;
  st->arr[++(st->top)] = val;
}

TreeNode *popnode(nodestack *st)
{
  if (st->top == -1)
    return NULL;
  return st->arr[(st->top)--];
}
typedef struct charstack
{
  char *arr;
  int top;
  int size;
} charstack;

void pushchar(charstack *st, char val)
{
  if (st->top == st->size - 1)
    return;
  st->arr[++(st->top)] = val;
}

char pop(charstack *st)
{
  if (st->top == -1)
    return -1;
  return st->arr[(st->top)--];
}

bool isEmptynode(nodestack *st)
{
  return st->top == -1;
}
bool isEmptychar(charstack *st)
{
  return st->top == -1;
}

nodestack *createnodestack(int size)
{
  nodestack *st = (nodestack *)malloc(sizeof(nodestack));
  st->top = -1;
  st->size = size;
  st->arr = (TreeNode **)malloc(sizeof(TreeNode *) * st->size);
  return st;
}
charstack *createcharstack(int size)
{
  charstack *st = (charstack *)malloc(sizeof(charstack));
  st->top = -1;
  st->size = size;
  st->arr = (char *)malloc(sizeof(char) * st->size);
  return st;
}

int precedence(char op)
{
  if (op == '+' || op == '-')
    return 1;
  else if (op == '*' || op == '/')
    return 2;
  else if (op == '^')
    return 3; // Exponentiation
  else
    return 0;
}

TreeNode *createTree(char ch[])
{
  charstack *st2 = createcharstack(100000);
  nodestack *st1 = createnodestack(100000);
  for (int i = 0; ch[i] != '\0'; i++)
  {
    if (ch[i] == ' ')
      continue;
    else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= '0' && ch[i] <= '9') || (ch[i] >= 'A' && ch[i] <= 'Z'))
    {
      pushnode(st1, createNode(ch[i]));
    }
    else if (ch[i] == '(')
    {
      pushchar(st2, ch[i]);
    }
    else if (ch[i] == ')')
    {
      while (!isEmptychar(st2) && st2->arr[st2->top] != '(')
      {
        TreeNode *ch = createNode(pop(st2));
        TreeNode *first = popnode(st1);
        TreeNode *second = popnode(st1);
        ch->left = second;
        ch->right = first;
        pushnode(st1, ch);
      }
      pop(st2);
    }
    else
    {
      while (!isEmptychar(st2) && ((ch[i] == '^' &&
                                    precedence(ch[i]) < precedence(st2->arr[st2->top])) ||
                                   (ch[i] != '^' && precedence(ch[i]) <= precedence(st2->arr[st2->top]))))

      {
        TreeNode *ch = createNode(pop(st2));
        TreeNode *first = popnode(st1);
        TreeNode *second = popnode(st1);
        ch->left = second;
        ch->right = first;
        pushnode(st1, ch);
      }
      pushchar(st2, ch[i]);
    }
  }
  while (!isEmptychar(st2))
  {
    TreeNode *ch = createNode(pop(st2));
    TreeNode *first = popnode(st1);
    TreeNode *second = popnode(st1);
    ch->left = second;
    ch->right = first;
    pushnode(st1, ch);
  }
  return popnode(st1);
}

void inorderTraversal(TreeNode *root)
{
  if (root == NULL)
    return;

  inorderTraversal(root->left);
  printf("%c ", root->ch);
  inorderTraversal(root->right);
}

void postorderTraversal(TreeNode *root)
{
  if (root == NULL)
    return;

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%c ", root->ch);
}

int main()
{
  char ch[1000000];
  gets(ch);
  TreeNode *ans = createTree(ch);
  inorderTraversal(ans);
  printf("\n");
  postorderTraversal(ans);

  return 0;
}