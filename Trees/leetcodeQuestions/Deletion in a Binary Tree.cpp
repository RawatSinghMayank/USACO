

https://www.geeksforgeeks.org/problems/deletion-in-a-binary-tree/0

Node*deleteLastNode(Node*root,int val){
 if(root==NULL)return root;
 if(root->data==val){
     free(root);
     return NULL;
 }
if(root->left) root->left=deleteLastNode(root->left,val);
 if(root->right)root->right=deleteLastNode(root->right,val);
 return root;
}

struct Node* deletionBT(struct Node* root, int key)
{
    Node*find=NULL;
   if(root==NULL)return root;
    Node*lastNode=NULL;
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        lastNode=it;
        if(it->data==key)find=it;
        if(it->left)q.push(it->left);
        if(it->right)q.push(it->right);
    }
    if(find==NULL)return root;
   
    
    int x=lastNode->data;
   
   root= deleteLastNode(root,lastNode->data);
   
   if(lastNode!=find) find->data=x;
    return root;
    
}