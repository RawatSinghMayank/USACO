 https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
 
 int countNonLeafNodes(Node* root) {
        queue<Node*>q;
        if(root)q.push(root);
       
        int nulls=0;
        int total=0;
        while(!q.empty()){
       int n=q.size();
       for(int i=0;i<n;i++){
           auto it=q.front();
           q.pop();
           if(it->left)q.push(it->left);
           if(it->right)q.push(it->right);
           if(it->left==NULL and it->right==NULL)nulls++;
       }
      total+=n;

        } 
    return total-nulls;}


      void nonLeaves(Node*root,int &count){
      if(root==NULL)return ;
      if(root->left!=NULL || root->right!=NULL)count++;
       nonLeaves(root->left,count);
       nonLeaves(root->right,count);
  }
    int countNonLeafNodes(Node* root) {
        
        int count=0;
        nonLeaves(root,count);
        return count;
  
    }
        int countNonLeafNodes(Node* root) {
      if(root==NULL ||  (root->left==NULL and root->right==NULL))return 0;
       return countNonLeafNodes(root->left)+countNonLeafNodes(root->right)+1;
      
    }