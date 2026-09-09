#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    char val;
    TreeNode *left, *right;
    TreeNode() {}
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
    TreeNode *createTree(string expression);
    void inorder(TreeNode *root);
};

TreeNode *TreeNode::createTree(string expression)
{
    stack<TreeNode *> st;
    for (int i = expression.length() - 1; i >= 0; i--)
    {
        if (expression[i] == '^' || expression[i] == '*' || expression[i] == '/' || expression[i] == '-' || expression[i] == '+')
        {
            auto it = st.top();
            st.pop();
            auto itt = st.top();
            st.pop();
            TreeNode *temp = new TreeNode(expression[i]);
            temp->left = it;
            temp->right = itt;
            st.push(temp);
        }
        else
        {
            TreeNode *temp = new TreeNode(expression[i]);
            st.push(temp);
        }
    }
    return st.top();
}
void TreeNode::inorder(TreeNode *ans)
{
    if (ans == NULL)
        return;
    inorder(ans->left);
    cout << ans->val << " ";
    inorder(ans->right);
}
void postorderTraversal(TreeNode *root)
{
    if (!root)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}
int main()
{
    string s;
    cin >> s;
    TreeNode *root;
    TreeNode *ans = root->createTree(s);
    root->inorder(ans);
    cout << endl;
    postorderTraversal(ans);
    return 0;
}