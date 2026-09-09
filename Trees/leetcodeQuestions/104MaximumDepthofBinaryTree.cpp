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
  void allHeights(TreeNode*root,int height,vector<int>&arr){
    if(root==NULL){
        arr.push_back(height);
        return;
    }
    allHeights(root->left,height+1,arr);
    allHeights(root->right,height+1,arr);
  }
    int maxDepth(TreeNode* root) {
        vector<int>arr;
        int ans=0;
        allHeights(root,0,arr);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
            ans=max(ans,arr[i]);
        }
    return ans;
    }
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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int height;
        if(root){
        q.push(root);
        height=0;
       }
     while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
        auto it=q.front();
        q.pop();
        if(it->left)q.push(it->left);
        if(it->right)q.push(it->right);
          }
          height++;
     }
     return height;
    }



};




  int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);   time-O(N) and space O(N)
        return max(lh,rh)+1;
    }



int height(TreeNode*root){
    if(root==NULL)return 0;
    int x=0,y=0;
    x=height(root->left);
    y=height(root->right);
     if(x>y)return x+1;
     else return y+1;
}



