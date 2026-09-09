/*Introduction 
Data Structures and Algorithms play a vital role in the technical interviews. Tree is a topic that most interviewers 
tend to test. It seems to be a perfect concept to know a candidate’s knowledge of programming concepts and logic. 

So, in this article, we will discuss one such problem related to trees. 

Also See, Binary Tree Postorder Traversal.

Problem Statement 
You are supposed to construct a complete binary tree from an array of elements. The elements are given in an array 
arranged in a level order fashion. 

Explanation of the problem 
So, according to the question, you will be given an array of elements that are to be used to form a complete binary
 tree. The catch here is that the elements are arranged in the array in a level order manner. By level order, 
 it means that all the elements in the same level in the tree are stored one after the other. 

For the above tree, the array given will be :
elements[]={‘A’,’B’,’C’,’D’,’E’,’F’}  
 

Now, a complete binary tree is a binary tree such that all the levels of the binary tree are completely filled except
 the lowest one. Also, the filling should start from the left side.  

  
 So, from the elements of the array, you are to form a complete binary tree. While doing so, you need to keep in mind 
 that elements in the array are stored in a level order manner.

Sample Example 
If the given array is as follows:
elements[]={‘A’,’B’,’C’,’D’,’E’}

Then, the complete binary tree is as follows:

Approach to the problem 
While thinking about the solution to the problem, we need to constantly think about the point that elements are arranged 
in a level order fashion. It is important because this is the only clue to how actually a tree will be formed. 

Now, one thing more, we cannot move from child to parent node. This is not possible in trees. Only navigating from the
 parent node to the children nodes is possible, so this is another observation. 

So, if you observe carefully in the sample example, child nodes of ‘A’ are ‘B’ and ‘C’. The index of ‘A’ is 0, ‘B’ is 
1 and ‘C’ is 2. And, the children nodes of ‘B’ are ‘D’ and ‘E’. The index of ‘B’ is 1, ‘D’ is 3 and ‘E’ is 4. 

So, for the parent node with index ‘t’, the children node will be on the index ‘2t+1’ and ‘2t+2’. 

Therefore, we keep the 0th index element as the root node and then keep its left and right child as the element on the 
index 1 and 2. Then we move to the 1st index element, allocate its left and right child with the same technique, and
 continue doing some till all the elements are used up.  

Steps of the algorithm 
Make the 0th index node the root node. 
Allocate the left node and right node as the 2t+1 and 2t+2 respectively if the index of the parent is t.
If 2t+1 or 2t+2 index is out of bound then, that child is not present. 
Move to the next index 
Repeat steps 2, 3, and 4 till all the elements are used up. 
Implementation in C++ */



#include<bits/stdc++.h>
using namespace std;
class TreeNode{
   public:
   int val;
   TreeNode*left,*right;
   
 
   TreeNode():val(0),left(NULL),right(NULL){}
   TreeNode(int val):val(val),left(NULL),right(NULL){}
   TreeNode(int val,TreeNode*left,TreeNode*right):val(val),left(left),right(right){}

TreeNode*CBT(int arr[],int idx,int n){
   if(idx>=n || arr[idx]==-1)return NULL;
  TreeNode*root=new TreeNode(arr[idx]);
   root->left=CBT(arr,2*idx+1,n);
   root->right=CBT(arr,2*idx+2,n);
   return root;
}


void Preorder(TreeNode*root){
   if(root==NULL)return;
   cout<<root->val<<" ";
   Preorder(root->left);
   Preorder(root->right);
}
void levelOrder(TreeNode*root){
   if(root==NULL)return ;
   queue<TreeNode*>q;
   q.push(root);
   while(!q.empty()){
      auto it=q.front();
      q.pop();
      cout<<it->val<<" ";
      if(it->left)q.push(it->left);
      if(it->right)q.push(it->right);
   }
}
};
int main(){

  int arr[]={1,2,3,4,-1,5,6,7,8,-1,-1,9,-1,-1,-1};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  TreeNode*t;
  TreeNode*root=t->CBT(arr,0,n);
  t->Preorder(root);
  cout<<endl;
  t->levelOrder(root);

   return 0;
}