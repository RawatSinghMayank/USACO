#include<bits/stdc++.h>
using namespace std;
class  TreeNode{
	public:
 TreeNode*right;
 TreeNode*left;
int val;
TreeNode(){}
TreeNode(int val){
	left=NULL;
right=NULL;
	this->val=val;
}
};
TreeNode*insertBST(TreeNode*root,int val){

if(root==NULL){
return new TreeNode(val);
}

else if(root->val<val){
 root->right=insertBST(root->right,val);
}
else if(root->val>val){
 root->left=insertBST(root->left,val);
}
 return root;
}

TreeNode*search(TreeNode*root,int val){
	if(root==NULL)return NULL;
	else if(root->val==val)return root;
	else if(root->val<val) return search(root->right,val);
     else return search(root->left,val);
}

void preOrder(TreeNode*root){
	if(root==NULL)return;
	cout<<root->val<<endl;
	preOrder(root->left);
	preOrder(root->right);
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int Q;
cin>>Q;
TreeNode*root=NULL;
for(int i=0;i<n;i++){
root=insertBST(root,arr[i]);
}

root=search(root,Q);

preOrder(root);

return 0;
}