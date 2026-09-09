
https://www.geeksforgeeks.org/problems/sum-of-binary-tree/0

class Solution {
  public:
    int sumBT(Node* root) {
     if(root==NULL)return 0;
     return root->data+sumBT(root->left)+sumBT(root->right);
    }
};

int sumBT(Node* root) {
        // code here
        queue<Node*>q;
        int sum=0;
        if(root)q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto it=q.front();
                q.pop();
                sum+=it->data;
                if(it->right)q.push(it->right);
                if(it->left)q.push(it->left);
            }
        }
    return sum;}