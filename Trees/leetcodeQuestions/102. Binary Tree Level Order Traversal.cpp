// Given the root of a binary tree, return the level order traversal of its nodes' values.
//  (i.e., from left to right, level by level).
// Example 1:
// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
       queue<TreeNode*>q1,q2;
       if(root){
           q1.push(root);
       }
       while(!q1.empty()){
      
       vector<int>temp;
       q2=q1;
       while(q1.size()){
           temp.push_back(q1.front()->val);
           q1.pop();
           
       }
      q1=q2;
      
       while(q2.size()){
            TreeNode*ptr=q1.front();
            q1.pop(),q2.pop();
         if(ptr->left){
             q1.push(ptr->left);
         }
         if(ptr->right){
             q1.push(ptr->right);
         }
           
       }
       ans.push_back(temp);
       }
       return ans; 
    }

//2 method




    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root)
        q.push(root);
            vector<vector<int>>ans;
            while(!q.empty()){
            TreeNode*ptr;
            vector<int>temp;
            int size=q.size();
            for(int i=0;i<size;i++){
                ptr=q.front();
                temp.push_back(ptr->val);
                q.pop(); 
                if(ptr->left)q.push(ptr->left);
                if(ptr->right)q.push(ptr->right);
            }
            ans.push_back(temp);
        }
    return ans;}


