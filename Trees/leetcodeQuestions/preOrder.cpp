Why Use a Stack?
Mimicking the Call Stack:

Recursive tree traversal inherently uses the call stack to keep track of the nodes. 
When converting the recursive approach to an iterative one, an explicit stack data 
structure is used to simulate this behavior.
Preorder Traversal:

Preorder traversal visits nodes in the order: Root, Left, Right. To achieve this 
iteratively, we need to process the root first, then push the right child followed 
by the left child onto the stack. This ensures that the left child is processed before
 the right child since the stack is a Last In, First Out (LIFO) data structure.

 Visit the root node.
Traverse the left subtree.
Traverse the right subtree. 



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
       if(root) st.push(root);
        vector<int>ans;
        while(!st.empty()){
            root=st.top();
            st.pop();                         T.C-o(n), S.C-O(N)
            ans.push_back(root->val);
            if(root->right)st.push(root->right);
            // right phale push krka kyuki stack lifo hai left upar rahega phir
            // and preorder is root left right
            if(root->left)st.push(root->left);
        }
    return ans;}
};


ector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
     stack<TreeNode*>st;
 while(!st.empty() || root!=NULL){
    if(root!=NULL){
        ans.push_back(root->val);
        st.push(root);
        root=root->left;
    }
else {
    root=st.top();
    st.pop();
    root=root->right;
    }
 }
    return ans;}

class Solution {
public:
 void result(vector<int>&ans,TreeNode*root){
    if(root==NULL)return;
    ans.push_back(root->val);
    result(ans,root->left);
    result(ans,root->right);
 }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
    result(ans,root);
    return ans;}
};