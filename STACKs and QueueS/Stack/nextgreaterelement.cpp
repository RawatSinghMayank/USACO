#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 2, 5, 4, 6, 2, 3}; // ans={5,2,5,6,6,-1,3,-1}
    int n = v.size();
    vector<int> ans(n, -1);
    // for (int i = 0; i < n - 1; i++)       BRUTE FORCE-T-C-O(N^2),S-C-O(1);
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] > v[i])
    //         {
    //             ans[i] = v[j];
    //             break;
    //         }
    //     }
    // }

    // OPTIMAL USING STACK  T.C-O(2N)  S.C-O(N);
    stack<int> st;
    st.push(v[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() && st.top() <= v[i])
        {
            st.pop();
        }
        if (st.size())
            ans[i] = st.top();
        st.push(v[i]);
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}