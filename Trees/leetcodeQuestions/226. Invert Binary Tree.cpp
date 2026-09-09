/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 void rev(queue<TreeNode*>&q){
    stack<TreeNode*>st;
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }

 }
    TreeNode* invertTree(TreeNode* root) {
      if(root==NULL)return root;
      TreeNode*newroot=new TreeNode(root->val);
        queue<TreeNode*>q1,q2;
        q1.push(root),q2.push(newroot);
        while(!q1.empty()){
            int n=q1.size();
            rev(q1);
            rev(q2);
        for(int i=0;i<n;i++){
        auto it=q1.front(),itt=q2.front();
        q1.pop(),q2.pop();
        if(it->left){
            q1.push(it->left);
        TreeNode*temp=new TreeNode(it->left->val);
        itt->right=temp;
        q2.push(temp);           }
       if(it->right){
        TreeNode*temp=new TreeNode(it->right->val);
        q1.push(it->right);
      itt->left=temp;
      q2.push(temp);
       }
        
         }
    }
    return newroot;}
};



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
       if(root->left==NULL and root->right==NULL)return root;
       swap(root->left,root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
    }
};





class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(q.size()){
            auto it=q.front(); 
            q.pop();
            swap(it->left,it->right);
            if(it->left)q.push(it->left);
            if(it->right)q.push(it->right);
        }
    return root;}
};