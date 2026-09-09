#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> dp(n);
    int ans = 0;
    //dp(i) denote the length of the longest increasing subsequence that
    //ends at position i

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++){
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i],1 + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
    return 0;
}