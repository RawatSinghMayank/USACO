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
int max(int x,int y){
    return x>y?x:y;
 }
 int height(struct TreeNode*root){
    if(root==NULL)return 0;
    return max(height(root->left),height(root->right))+1;
 }

int diameterOfBinaryTree(struct TreeNode* root) {
    if(root==NULL)return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    int ld=diameterOfBinaryTree(root->left);
    int rd=diameterOfBinaryTree(root->right);
    return max(lh+rh,max(ld,rd));
}


class Solution {
public:
int leftplusRight(TreeNode*root,int &maxi){
    if(root==NULL)return 0;
    int lh=leftplusRight(root->left,maxi);
        int rh=leftplusRight(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;

}    O(N)
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
          leftplusRight(root,maxi);
        return maxi;

    }
};