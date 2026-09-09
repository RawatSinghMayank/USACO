#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int val;
    struct Node *left, *right;
} Node;

Node *createNode(int val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->left = temp->right = NULL;
    temp->val = val;
    return temp;
}
/* TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*newNode=new TreeNode(val);
        if(root==NULL)return newNode;
        TreeNode*temp=root;
        while(temp){
            if(val<temp->val){
                if(temp->left){
                    temp=temp->left;
                }
                else{
                    temp->left=newNode;
                    break;
                }
            }
            else{
                if(temp->right){
                    temp=temp->right;
                }
                else{
                    temp->right=newNode;
                    break;
                }
            }}
            return root;
        }*/
Node *InsertIterative(Node *root, int key)
{
    Node *toinsert = createNode(key);
    Node *keepLastNode;
    Node *temp = root;
    if (root == NULL)
    {
        root = toinsert;
        return root;
    }
    while (root != NULL)
    {
        keepLastNode = root;
        if (key < root->val)
        {
            root = root->left;
        }
        else if (key == root->val)
        {
            return root;
        }
        else
        {
            root = root->right;
        }
    }
    if (key < keepLastNode->val)
    {
        keepLastNode->left = toinsert;
    }
    else
    {
        keepLastNode->right = toinsert;
    }
    return temp;
}
Node *InsertBST(Node *root, int key)
{
    Node *toinsert = createNode(key);
    if (root == NULL)
    {
        return toinsert;
    }
    else if (root->val == key)
    {
        return root;
    }
    else if (key < root->val)
    {
        root->left = InsertBST(root->left, key);
    }
    else
        root->right = InsertBST(root->right, key);
    return root;
}

Node *searchBST(Node *root, int key)
{
    while (root)
    {
        if (key == root->val)
        {
            return root;
        }
        else if (key < root->val)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
    /* TreeNode* searchBST(TreeNode* root, int val) {
        while(root && root->val!=val){
            root=val<root->val?root->left:root->right;
        }
    return root;}*/
}
Node *searchBSTrecursive(Node *root, int key)
{
    if (root == NULL)
        return root;
    else if (key == root->val)
    {
        return root;
    }
    else if (key < root->val)
    {
        return searchBSTrecursive(root->left, key);
    }
    else
    {
        return searchBSTrecursive(root->right, key);
    }
}

void Inorder(Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    printf("%d ", root->val);
    Inorder(root->right);
}

int sameParent(Node*root){
if(root==NULL)return 0;
int count=0;
if(root->right && root->left)
count+=2;
count+=sameParent(root->left);
count+=sameParent(root->right);
return count;
}
int main()
{
    Node *root = NULL;
    root = InsertBST(root, 10);
    root = InsertBST(root, 5);
    root = InsertBST(root, 15);
    root = InsertBST(root, 5);
root = InsertBST(root, 15);
root=InsertBST(root,5);
root=InsertBST(root,15);
    root = InsertBST(root, 30);
    Inorder(root);
    printf("\n");
   printf("%d",sameParent(root));
    return 0;
}