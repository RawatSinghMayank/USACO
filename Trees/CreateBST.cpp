#include<bits/stdc++.h>
using namespace std;

class TreeNode {
private:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

 TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if (root == nullptr) {
            return new TreeNode(val);
        }

        if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        } else {
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }

     TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if (root == nullptr) return new TreeNode(val);

        TreeNode* curr = root;
        while (curr != nullptr) {
            if (val < curr->val) {

                if (curr->left != nullptr) curr = curr->left;
                else { 
                    curr->left = new TreeNode(val);
                    break;
                }
            } else {
                if (curr->right != nullptr) curr = curr->right;
                else {
                    curr->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }


TreeNode* delete(TreeNode* root, int val) {

}
//see all codes in lc
int main(){


    return 0;
}