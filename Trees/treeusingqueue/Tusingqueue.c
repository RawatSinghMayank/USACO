

/* Using a queue to create and traverse a binary tree level by level (also known as breadth-first traversal) is important for several reasons:

Ensuring Level Order Insertion
Balanced Tree:

The primary reason for using a queue is to ensure that the tree is constructed in a balanced manner. By inserting nodes level by level, you avoid skewing the tree to one side, which can happen if you insert nodes without this level order constraint.
Filling Levels Completely:

Using a queue helps in filling each level of the tree completely from left to right before moving to the next level. This ensures that each parent node gets its children in the correct order, maintaining the structure of a binary tree.
Efficient Node Insertion
Tracking Nodes to Insert Children:

The queue keeps track of nodes whose children need to be added. When a node is dequeued, it means we are ready to insert its left and right children (if they don't already exist). Once a node's children are added, the children are enqueued, so they can be processed in subsequent steps.
Orderly Processing:

The queue allows for orderly processing of nodes. When you dequeue a node to process it, you know that its children will be added after it, maintaining a clear and predictable order of insertion.
Example Walkthrough
Let's walk through an example to see how the queue helps in maintaining level order insertion:

Start with an Empty Tree:

Insert 10:
The tree is empty, so 10 becomes the root.
Enqueue 10.
Insert 20:

Dequeue 10 (the root).
10 has no left child, so insert 20 as the left child of 10.
Enqueue 20.
Insert 30:

Dequeue 10.
10 has a left child (20), so enqueue 20.
10 has no right child, so insert 30 as the right child of 10.
Enqueue 30.
Insert 40:

Dequeue 20.
20 has no left child, so insert 40 as the left child of 20.
Enqueue 40.
Insert 50:

Dequeue 20.
20 has a left child (40), so enqueue 40.
20 has no right child, so insert 50 as the right child of 20.
Enqueue 50.
Insert 60:

Dequeue 30.
30 has no left child, so insert 60 as the left child of 30.
Enqueue 60.
Insert 70:

Dequeue 30.
30 has a left child (60), so enqueue 60.
30 has no right child, so insert 70 as the right child of 30.
Enqueue 70.
Visualization
markdown
Copy code
Insert 10:
    10

Insert 20:
    10
   /
  20

Insert 30:
    10
   / \
  20  30

Insert 40:
    10
   / \
  20  30
 /
40

Insert 50:
    10
   / \
  20  30
 / \
40  50

Insert 60:
    10
   / \
  20  30
 / \  /
40 50 60

Insert 70:
    10
   / \
  20  30
 / \  / \
40 50 60 70
Summary
Queue for Level Order:

The queue helps in maintaining the level order by ensuring that each node's children are inserted before moving to nodes at the next level.
Balanced Tree:

This method keeps the tree balanced, preventing it from becoming skewed to one side.
Efficient Tracking:

The queue efficiently tracks nodes that need their children inserted, ensuring that the tree is built correctly.
Using a queue simplifies the process of constructing and traversing a binary tree level by level, making the algorithm more intuitive and efficient.


*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "q.h"
TreeNode*createTree(TreeNode*root){
    Queue*q=createQueue(1000);
    int n;
    printf("Enter root \n ");
    scanf("%d",&n);
      root=createTreeNode(n);
      enqueue(q,root);
      while(!isEmpty(q)){
        TreeNode*ptr=dequeue(q);
        TreeNode*temp;
        printf("Enter left child of %d ",ptr->val);
        int lchild;
        scanf("%d",&lchild);
        if(lchild!=-1){
            temp=createTreeNode(lchild);
            ptr->left=temp;
            enqueue(q,temp);
        }    
        
                printf("Enter right child of %d ",ptr->val);
        int rchild;
        scanf("%d",&rchild);
        if(rchild!=-1){
            temp=createTreeNode(rchild);
            ptr->right=temp;
            enqueue(q,temp);
        }    
        }
return root;
}
void displayPreOrder(TreeNode*root){
    if(root==NULL)return;
    printf("%d ",root->val);
    displayPreOrder(root->left);
    displayPreOrder(root->right);
}
void displayPostOrder(TreeNode*root){
if(root==NULL)return;
   
    displayPostOrder(root->left);
    displayPostOrder(root->right);
     printf("%d ",root->val);
}
void displayInOrder(TreeNode*root){
if(root==NULL)return;
  
    displayInOrder(root->left);
  
     printf("%d ",root->val);
    displayInOrder(root->right);
}

int height(TreeNode*root){
    if(root==NULL)return 0;
    int x=0,y=0;
    x=height(root->left);
    y=height(root->right);
     if(x>y)return x+1;
     else return y+1;
}
int countDegreeOneNodes(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;

    // Check if the current node has exactly one child
    if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL)) {
        count = 1;
    }

    // Traverse the left and right subtrees
    return count + countDegreeOneNodes(root->left) + countDegreeOneNodes(root->right);
}
int countDegreeOneNodesXOR(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;

    // Check if the current node has exactly one child
   if(root->left!=NULL ^ root->right!=NULL)count=1;

    // Traverse the left and right subtrees
    return count + countDegreeOneNodes(root->left) + countDegreeOneNodes(root->right);
}
int countDegreeOneOrTwoNodes(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;

    // Check if the current node has at least one child
    if (root->left != NULL || root->right != NULL) {
        count = 1;
    }

    // Traverse the left and right subtrees
    return count + countDegreeOneOrTwoNodes(root->left) + countDegreeOneOrTwoNodes(root->right);
}

int main(){
    TreeNode*root=NULL;
    root=createTree(root);
    displayInOrder(root);
    printf("%d ",height(root));
    printf("Degree one nodes %d ",countDegreeOneNodesXOR(root));
   printf("\n");
    printf("Degree oneortwo nodes %d ",countDegreeOneOrTwoNodes(root));
}