#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);

    vector<vector<int>> mat(8, vector<int>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> dp(10, vector<int>(9,INT_MAX));
    dp[8][1] = 0;

    for (int i = 8; i >= 1; i--) {
        
        for (int j = 1; j <= 8; j++) {

            dp[i][j] = min(dp[i][j], mat[i - 1][j - 1] + min(dp[i + 1][j - 1], min(dp[i][j - 1],dp[i + 1][j])));
        }
    }

    cout << dp[1][8] << "\n";

    return 0;
}
