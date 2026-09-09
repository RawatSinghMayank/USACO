/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
The logic behind the given code is to perform in-order, pre-order, and post-order traversals of a binary tree using 
an iterative approach with a stack. The key idea is to use the stack to simulate the call stack of a recursive 
traversal, and a state variable to track the traversal progress for each node.

Here's a detailed breakdown of the logic:

State 1 (Pre-order traversal):

If the node is in state 1, it means it is the first time we encounter this node. We process it 
for pre-order traversal by adding its value to the Pre vector.
We then increment its state and push it back onto the stack.
If the node has a left child, we push the left child onto the stack with state 1.

State 2 (In-order traversal):

If the node is in state 2, it means we have already processed it 
for pre-order and explored its left subtree. We now process it for in-order 
traversal by adding its value to the In vector.
We then increment its state and push it back onto the stack.
If the node has a right child, we push the right child onto the stack with state 1.

State 3 (Post-order traversal):

If the node is in state 3, it means we have processed it for pre-order, in-order, and explored both its left
 and right subtrees. We now process it for post-order traversal by adding its value to the Post vector.
The result vector contains the in-order, pre-order, and post-order traversal results in that order.
Summary of Traversal States
State 1: Pre-order processing and moving to the left child.
State 2: In-order processing and moving to the right child.
State 3: Post-order processing (no further children to process).
This approach ensures that each node is visited exactly three times,
 corresponding to the three types of traversals. The use of a stack 
 and state variables allows for an iterative solution that mimics the 
 behavior of recursive traversal functions.
#include<bits/stdc++.h>
vector<vector<int>> getTreeTraversal(TreeNode *root){
    stack<pair<TreeNode*,int>>st;
    if(root)st.push({root,1});
    vector<int>Pre,Post,In;
    while(!st.empty()){
      auto top=st.top();
      st.pop();
      if(top.second==1){
       Pre.push_back(top.first->data);
       top.second++;
       st.push(top);
      if(top.first->left!=NULL){
        st.push({top.first->left,1});
      }
      }
      else if(top.second==2){
     In.push_back(top.first->data);
     top.second++;
     st.push(top);
     if(top.first->right!=NULL){
       st.push({top.first->right,1});
     }
      }
      else{
     Post.push_back(top.first->data);
      }

    }
vector<vector<int>>result;
result.push_back(In);
result.push_back(Pre);
result.push_back(Post);
return result;
}