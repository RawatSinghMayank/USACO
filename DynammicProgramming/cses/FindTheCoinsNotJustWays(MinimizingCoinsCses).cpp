#include<bits/stdc++.h>
using namespace std;

/* number of coins = 3, sum = 11,
coins = [1,5,7]
optimal way: 5 + 5 + 1
number of coins required = 3, coins used : 5,5,1
*/

int main() {

    int n, sum;
    cin >> n >> sum;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    vector<int> coinsUsed(sum + 1);
    vector<int> dp(sum + 1,1e8);
    dp[0] = 0;

    for (int currSum = 1; currSum <= sum; currSum++) {

        for (int coin : coins) {

            if(currSum >= coin) {

                if (1 + dp[currSum - coin] < dp[currSum]) {
                    dp[currSum] = 1 + dp[currSum - coin];
                    coinsUsed[currSum] = coin;
                }
            }
        }
        
    }

    int target = sum;

    if (dp[target] == 1e8) {
        cout << "Impossible to form the target sum." << endl;
    } else {
        
        while (target > 0) {
            cout << coinsUsed[target] << " ";
            target -= coinsUsed[target];
        }
    }
   
    
    return 0;
}