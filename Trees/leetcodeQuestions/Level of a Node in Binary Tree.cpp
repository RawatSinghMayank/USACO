
https://www.geeksforgeeks.org/problems/level-of-a-node-in-binary-tree/1

  int getLevel(struct Node *root, int target)
    {
    	int level=1;
    	queue<Node*>q;
    	if(root)q.push(root);
    	while(!q.empty()){
    	    int n=q.size();
    	    for(int i=0;i<n;i++){
    	     auto it=q.front();
    	     q.pop();
    	     if(it->data==target)return level;
    	     if(it->right)q.push(it->right);
    	     if(it->left)q.push(it->left);
    	    }
    	    level++;
    	}
    	return 0;
    }


    int getLevel(struct Node *node, int target)
    {
        if(node==NULL)return 0;
        if(node->data==target)return 1;
        int leftCheck=getLevel(node->left,target);
        int rightCheck=getLevel(node->right,target);
        if(leftCheck)return leftCheck+1;
        else if(rightCheck)return rightCheck+1;
        else return 0;
    	
    }

