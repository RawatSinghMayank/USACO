
class Solution {
public:
int Count(TreeNode*root){
    if(root==NULL)return 0;
   int totalNodes=0;
   totalNodes+= Count(root->left);
  totalNodes+=  Count(root->right);
    return totalNodes+1;
}
    int countNodes(TreeNode* root) {
        int totalNodes=0;
        return Count(root);
        
    }
};


class Solution {
public:
void anyOrder(vector<int>&size,TreeNode*root){
    if(root==NULL)return;
    size.push_back(root->val);
    anyOrder(size,root->left);
    anyOrder(size,root->right);
}
    int countNodes(TreeNode* root) {
        vector<int>size;
        anyOrder(size,root);
        return size.size();
    }
};

class Solution {
public:
    int countNodes(TreeNode* root) {
        stack<TreeNode*>st;
        if(root)st.push(root);
        int counter=0;
        while(st.size()){
        root=st.top();
        st.pop();
        counter++;
        if(root->right)st.push(root->right);
        if(root->left)st.push(root->left);

        }
        return counter;
    }
};


    class Solution {
public:
void  Count(int &count,TreeNode*root){
    if(root==NULL)return ;
    count++;
   Count(count,root->left);
    Count(count,root->right);
    
}
    int countNodes(TreeNode* root) {
      int count=0;
      Count(count,root);
      return count;
        
    }
};