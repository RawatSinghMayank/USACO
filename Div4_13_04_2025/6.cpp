#include<iostream>
#include<vector>
#include <algorithm>
#include<limits.h>
using namespace std;
 
int minSteps(int m, int n) {
 
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
 
    for (int i = 1; i <= m; i++) {
 
        for (int j = 1; j <= n; j++) {
            
            if (i == j) dp[i][j] = 0;
            else {
           
                dp[i][j] = INT_MAX;
                for (int k = 1; k <= j - 1; k++) {
                    dp[i][j] = min (dp[i][j], 1 + dp[i][k] + dp[i][j - k]);
                }
                for (int k = 1; k <= i - 1 ; k++) {
					dp[i][j] = min(dp[i][j], 1 + dp[k][j] +  dp[i - k][j]);   
                }
            }
        }
    }
    return dp[m][n];    
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a >> b;
 
    cout  << minSteps(a,b) << endl;
    return 0;
}
