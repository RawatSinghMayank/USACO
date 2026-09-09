#include <bits/stdc++.h>
using namespace std;
class et
{
public:
    char value;
    et *left, *right;
    et() {}
    et(char x) : value(x), left(NULL), right(NULL) {}
};

et *constructTree(string postfix)
{
    stack<et *> st;
    for (int i = 0; i < postfix.length(); i++)
    {
        if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^')
        {
            auto it = st.top();
            st.pop();
            auto itt = st.top();
            st.pop();
            et *temp = new et(postfix[i]);
            temp->left = itt;
            temp->right = it;
            st.push(temp);
        }
        else
        {
            et *temp = new et(postfix[i]);
            st.push(temp);
        }
    }

    return st.top();
}

void inorder(et *ans)
{
    if (ans == NULL)
        return;
    inorder(ans->left);
    cout << ans->value << " ";
    inorder(ans->right);
}

int main()
{
    string s;
    cin >> s;
    et *ans = constructTree(s);
    inorder(ans);
    return 0;
}