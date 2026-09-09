#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

TreeNode* buildTree() {

    //-1 for null
    int val;
    cout << "Enter root value: " << endl;
    cin >> val;

    if (val == -1) return nullptr;
    TreeNode* root = new TreeNode(val);
    
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        
        TreeNode* node = q.front();
        q.pop();

        cout << "Enter left child of " << node->val << " " << endl;
        int leftVal;
        cin >> leftVal;
        if (leftVal != -1) {
            node->left = new TreeNode(leftVal);
            q.push(node->left);
        }

        cout << "Enter right child of " << node->val << "  " << endl;
        int rightVal;
        cin >> rightVal;
        if (rightVal != -1) {
            node->right = new TreeNode(rightVal);
            q.push(node->right);
        }
    }

    return root;
}

TreeNode* insertNode(TreeNode* root, int val) {

    if (root == nullptr) {
        root = new TreeNode(val);
        return root;
    }

    queue<TreeNode*> q;
    q.push(root);

    TreeNode* newNode = new TreeNode(val);

    while (!q.empty()) {

        TreeNode* node = q.front();
        q.pop();

        if (node->left == nullptr) {
            node->left = newNode; 
            return root;
        }
        q.push(node->left);
        
        if(node->right == nullptr) {
            node->right = newNode;
            return root;
        }
        q.push(node->right);
    }

    return root;
}

bool search(TreeNode* root, int val) {

    if (root == nullptr) return false;
    if (root->val == val) return true;

    return (search(root->left, val) || search(root->right, val));
}
void deleteDeepestNode(Node* root, Node* target) {
        
        if (root == nullptr) return;
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            
            Node* temp = q.front();
            q.pop();
            
            if (temp->left != nullptr) {
                
                if (temp->left == target) {
                    delete temp->left;
                    temp->left = nullptr;
                    return ;
                } else {
                    q.push(temp->left);
                }
            }
            
            if (temp->right != nullptr) {
                
                if(temp->right == target) {
                    delete temp->right;
                    temp->right = nullptr;
                    return ;
                } else {
                    q.push(temp->right);
                }
            }
        }
        
    
    }
    
    Node* deleteNode(Node* root, int key) {
        
        if (root == nullptr) return nullptr;
        queue<Node*> q;
        q.push(root);
        Node* target = nullptr, *lastNode = nullptr;
        
        while (!q.empty()) {
            
            lastNode = q.front();
            q.pop();
            
            if (lastNode->left != nullptr) q.push(lastNode->left);
            if (lastNode->right != nullptr) q.push(lastNode->right);
           
            if (lastNode->data == key) {
                target = lastNode;
            }
        }
        
        
        if (target != nullptr) {
            target->data = lastNode->data;
           deleteDeepestNode(root, lastNode);
        }
        return root;
    }


void bfs(TreeNode* root)  {

    if (root == nullptr) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {

        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            cout << node->val << " ";
            if (node->left != nullptr) {
                q.push(node->left);
            }
            if(node->right != nullptr) {
                q.push(node->right);
            }
        }
        cout << endl;
    }
}

void deleteTree(TreeNode* root) {

    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

// In Binary Search Tree, duplicates:
//  Usually not allowed

//  Can binary tree have duplicates?

//  Answer:

//  Yes, because there is no ordering constraint
// But operations like delete/search may become ambiguous


TreeNode* deleteNode(TreeNode* root, int val) {
    if (root == nullptr) return nullptr;

}

int main() {

    TreeNode* root = nullptr;
    root = buildTree();

    bfs(root);
    int val;
    cout << "Enter value you want to insert" << endl;
    cin >> val;

    root = insertNode(root, val);
    bfs(root);

    cout << "Enter value you want to search" << endl;
    cin >> val;
    if (search(root, val)) {
    cout << "Found\n";
    } else {
            cout << "Not Found\n";
    }

    deleteTree(root);
    root = nullptr;

        // Tree building → O(n)
        // Insert → O(n)
        // Search → O(n) Because Binary Tree is NOT ordered
        // Why insert is level-order?

        // Answer:

        // Binary Tree has no structure rules
        // So we insert in first available position
        // This keeps tree as compact as possible (complete-like)
    
    return 0;
}