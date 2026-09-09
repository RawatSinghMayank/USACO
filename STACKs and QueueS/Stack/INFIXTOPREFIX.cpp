#include <bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    return 0;
}
string convert(string s)
{
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }
    int n = s.length();
    string ans = "";
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.size() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop(); // poping opening bracket
        }
        else
        {
            if (s[i] == '^')
            {
                while (st.size() && precedence(s[i]) <= precedence(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while ((st.size() && precedence(s[i]) < precedence(st.top())))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << convert(str);
    return 0;
}