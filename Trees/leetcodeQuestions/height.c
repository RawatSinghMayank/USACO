int height(TreeNode*root){
    if(root==NULL)return 0;
    int x=0,y=0;
    x=height(root->left);
    y=height(root->right);
     if(x>y)return x+1;
     else return y+1;
}