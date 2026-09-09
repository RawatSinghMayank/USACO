#include<bits/stdc++.h>
using namespace std;

 vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        if(root)st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->left)st.push(root->left);
            if(root->right)st.push(root->right);

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }




    void result(TreeNode*root,vector<int>&ans)
{
    
        if(root==NULL)return;
        result(root->left,ans);
        result(root->right,ans);
               ans.push_back(root->val);

}


    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        result(root,ans);
        return ans;
    }







     vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        /*
        The idea is to push reverse Postorder traversal to a stack. Once we have the 
        reversed postorder traversal in a stack, we can just pop all items one by one 
        from the stack and print them; this order of printing will be in postorder because 
        of the LIFO property of stacks. Now the question is, how to get reversed postorder 
        elements in a stack – the second stack is used for this purpose. For example, in the 
        following tree, we need to get 1, 3, 7, 6, 2, 5, 4 in a stack. If we take a closer look 
        at this sequence, we can observe that this sequence is very similar to the preorder traversal. 
        The only difference is that the right child is visited before left child, and therefore the sequence 
        is “root right left” instead of “root left right”. So, we can do something like iterative preorder 
        traversal with the following differences: 
a) Instead of printing an item, we push it to a stack. 
b) We push the left subtree before the right subtree.
*/
       if(root) st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
             if(root->left){
                st1.push(root->left);
            }
            if(root->right){
                st1.push(root->right);
            }
           
        }
        vector<int>ans;
        while(!st2.empty()){
ans.push_back(st2.top()->val);
st2.pop();
        }
        return ans;
    }



If current is NULL, check the right child of the node at the top of the stack.
If the right child is NULL, it means the node can be processed (added to the ans vector).
Pop the node from the stack and add its value to the result.
Check if the node at the top of the stack is the right child of the current node. If so, process it as well.
If the right child is not NULL, move the current pointer to the right child and continue the process.

The algorithm starts by moving down to the leftmost node, pushing each node and its right child (if present) onto the stack.
Once the leftmost node is reached, it is processed if it does not have a right child.
If it has a right child, the algorithm changes the current pointer to the right child,
 ensuring that the right subtree is processed before the node itself.
This process is repeated until the entire tree is traversed and all nodes are processed
 in postorder (left, right, root).
This approach ensures that each node is processed in the correct postorder sequence without
 using recursion, making it suitable for large trees where recursion could lead to stack overflow issues.




vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode*current=root;
        while(!st.empty() || current!=NULL){
            if(current!=NULL){
                st.push(current);
                current=current->left;
            }
            else{
                TreeNode*temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                  ans.push_back(temp->val);
                while(!st.empty() && temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }

                }
                else{
                    current=temp;
                }
            }
        }
return ans;
    }


int main()
{
return 0;
}