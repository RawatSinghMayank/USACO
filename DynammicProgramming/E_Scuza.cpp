#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(vector<int>& heights, vector<int>& questions) {

    int n = heights.size(), q = questions.size();
    vector<int> prefixSum(n);
    vector<int> prefixMax(n);
    
    prefixSum[0] = prefixMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], heights[i]);
        prefixSum[i] = prefixSum[i - 1] + heights[i];
    }

    for (int i = 0; i < q; i++) {

        int step = questions[i];
  
        int low = 0 ,ans = -1, high = n - 1;
        ans = upper_bound(prefixMax.begin(),prefixMax.end(), step) - prefixMax.begin() - 1;
        if (ans == -1) {
            cout << 0 << " ";
        } else {
            cout << prefixSum[ans] << " ";
        }
    }
    cout << "\n";

}

signed main() {

    int test;
    cin >> test;

    while(test--) {

        int n, q;
        cin >> n >> q;

        vector<int> heights(n), questions(q);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> questions[i];
        }

        solve(heights, questions);
    }
    return 0;
}