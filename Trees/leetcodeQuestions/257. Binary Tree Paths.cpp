
class Solution {
public:
void findPath(TreeNode*root,string temp,vector<string>&ans){
    if(root==NULL)return;
      if(root->right==NULL and root->left==NULL){
       temp+=to_string(root->val);
        ans.push_back(temp);
        return ;
    }
   
    findPath(root->left,temp+to_string(root->val)+"->",ans);
   
    findPath(root->right,temp+to_string(root->val)+"->",ans);
    
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string temp="";
        findPath(root,temp,ans);
        return ans;
    }
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
     queue<TreeNode*>nodes;
     queue<string>path;
     vector<string>ans;
    nodes.push(root),path.push(to_string(root->val));
    while(!nodes.empty()){
        auto it=nodes.front();
        auto prevPath=path.front();
        nodes.pop(),path.pop();
    if(it->left==NULL and it->right==NULL){
        ans.push_back(prevPath);
    }
        if(it->left)
        {nodes.push(it->left);
        path.push(prevPath+"->"+to_string(it->left->val));
    }
    if(it->right){
        nodes.push(it->right);
        path.push(prevPath+"->"+to_string(it->right->val));
    }

    }
    return ans;}
};