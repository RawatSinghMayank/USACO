#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> v = {-8, 2, 3, -6, 10};
    int n = v.size();
    int k = 2;
    int idx = -1;
    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
        {
            idx = i;
            break;
        }
    }
    vector<int> ans;
    if (idx == -1)
        ans.push_back(0);
    else
        ans.push_back(v[idx]);
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (idx >= i)
            ans.push_back(v[idx]);
        else
        {
            idx = -1;
            for (int x = i; x < i + k; x++)
            {
                if (v[x] < 0)
                {
                    idx = x;
                    break;
                }
            }
            if (idx == -1)
                ans.push_back(0);
            else
                ans.push_back(v[idx]);
        }
        i++;
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
