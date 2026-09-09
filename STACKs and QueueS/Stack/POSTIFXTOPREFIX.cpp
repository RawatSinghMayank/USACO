#include <bits/stdc++.h>
using namespace std;
bool check(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}
string postToPrefix(string s)
{
    stack<string> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (check(s[i]))
        {
            string n(1, s[i]);
            st.push(n);
        }
        else
        {
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            st.push(s[i] + y + x);
        }
    }

    return st.top();
}
int main()
{
    string str;
    cin >> str;
    cout << postToPrefix(str);
    return 0;
}