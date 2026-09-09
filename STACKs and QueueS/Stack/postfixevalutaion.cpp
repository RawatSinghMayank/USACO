#include <bits/stdc++.h>
using namespace std;
int evaluate(int a, int b, char ch)
{
    if (ch == '+')
        return b + a;
    else if (ch == '-')
        return b - a;
    else if (ch == '/')
        return b / a;
    return b * a;
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            st.push(str[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int ans = evaluate(a, b, str[i]);
            st.push(ans);
        }
    }
    cout << st.top();

    return 0;
}