// Find the count of numbers between l and r which have a sum of digits = X. 
// 1 <= L <= R <= 10^18 
// 1 <= X <= 180. 



























#include<bits/stdc++.h>
using namespace std;
#define int long long

int countNumbers(string &num, int index, int sum, int tight, vector<vector<vector<int>>>& dp) {
    // EARLY PRUNING: If sum drops below 0, no positive digits can fix it
    if (sum < 0) return 0;
    
    if (index == num.size()) {
        return (sum == 0) ? 1 : 0;
    }

    if (dp[index][sum][tight] != -1) return dp[index][sum][tight];

    int upperBound = (tight) ? num[index] - '0' : 9;
    int count = 0;
    
    for (int digit = 0; digit <= upperBound; digit++) {
        int newTight = (tight && (digit == upperBound));
        count += countNumbers(num, index + 1, sum - digit, newTight, dp);
    }

    return dp[index][sum][tight] = count;
}

signed main(){

    string L = "20" , R = "134234"; 
    int targetSum = 5;
    
    // DP for R
    vector<vector<vector<int>>> dp1(19, vector<vector<int>>(181, vector<int>(2, -1)));
    int right = countNumbers(R, 0, targetSum, 1, dp1);
    
    // DP for L (Passing L directly instead of decrementing it!)
    vector<vector<vector<int>>> dp2(19, vector<vector<int>>(181, vector<int>(2, -1)));
    int left = countNumbers(L, 0, targetSum, 1, dp2);
    
    // MANUAL CHECK FOR L
    int L_sum = 0;
    for (int i = 0; i < L.size(); i++) {
        L_sum += (L[i] - '0');
    }

    // If L itself has the target sum, decrement 'left' to include L in our final range
    if (L_sum == targetSum) {
        left--;
    }

    cout << right - left << endl;
    
    return 0;
}