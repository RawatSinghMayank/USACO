

bool allNodes(TreeNode*p,TreeNode*q){
        if(p==NULL  and q==NULL)return true;
        if(p==NULL)return false;
        if(q==NULL)return false;
     if(p->val!=q->val)return false;
       bool leftCheck= allNodes(p->left,q->left);
        bool rightCheck=allNodes(p->right,q->right);
        return leftCheck&&rightCheck;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return allNodes(p,q);

    }

reducing lines of code
      
    bool allNodes(TreeNode*p,TreeNode*q){
        if(p==NULL  and q==NULL)return true;
        if(p==NULL || q==NULL || p->val!=q->val)return false;
        
        return allNodes(p->left,q->left)&&allNodes(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return allNodes(p,q);

    }



    bool isSameTree(TreeNode* p, TreeNode* q) {
       queue<TreeNode*>q1;
       q1.push(p);
       q1.push(q);
       while(!q1.empty()){   
        auto it=q1.front();
        q1.pop();
       auto  itt=q1.front();
        q1.pop();
        if(it==NULL && itt==NULL)continue;
        if(it==NULL || itt==NULL)return false;
        if(it->val!=itt->val)return false;
        q1.push(it->left);
        
        q1.push(itt->left);
        q1.push(itt->right);
        q1.push(it->right);
       } 
    return true;
    }