
https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
int countLeaves(Node* root) {
        queue<Node*>q;
        if(root)q.push(root);
       
        int nulls=0;
        while(!q.empty()){
       int n=q.size();
       for(int i=0;i<n;i++){
           auto it=q.front();
           q.pop();
           if(it->left)q.push(it->left);
           if(it->right)q.push(it->right);
           if(it->left==NULL and it->right==NULL)nulls++;
       }
      

        }
        
  return nulls;  }



  int countLeaves(Node* root) {
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)return 1;
        return countLeaves(root->left)+countLeaves(root->right);
    }

    int countLeaves(Node* root) {
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL)return 1;
        int left=0,right=0;
left+=countLeaves(root->left);
         right+=countLeaves(root->right);
        return left+right;
    }