
    int getSize(Node* node) {
       if(node==NULL)return 0;
       int ans=0,l=0,r=0;
        l+=getSize(node->left);
        r+=getSize(node->right);
       return l+r+1;
    }


    
      int getSize(Node* node) {
       if(node==NULL)return 0;
       
    return     getSize(node->left)+getSize(node->right)+1;

      
    }