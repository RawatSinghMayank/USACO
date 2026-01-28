
#include<bits/stdc++.h>
using namespace std;

int minimizingCoins(vector<int> &coins, int targetSum){

	int n = coins.size();
	vector<int> dp(targetSum + 1, 1e9);
	vector<int> bestChoice(targetSum + 1);
	dp[0] = 0;
	for (int sum = 1; sum <= targetSum; sum++){
		
		for (int j = 0; j < n; j++){
			int coin = coins[j];
			
			if (sum - coin >= 0){
				if (dp[sum - coin] + 1 < dp[sum]){	
					dp[sum] = dp[sum - coin] + 1;
					bestChoice[sum] = coin;
				}
			}
		}
	}	
	//CPH HANDBOOK PROBLEM
	// Sometimes we are asked both to find the value of an optimal solution and to give
// an example how such a solution can be constructed. In the coin problem, for
// example, we can declare another array that indicates for each sum of money the
// first coin in an optimal solution:
	int temp = targetSum;
	if (dp[targetSum] != 1e9){
		
		while(temp > 0){
			cout << bestChoice[temp] << " ";
			temp -= bestChoice[temp];
		}
		cout << endl;
		return dp[targetSum];
	}
	return -1;
}

//counting the number of ways -. given in cph book
int numberOfWays(vector<int> &coins, int targetSum){

	int mod = 1e9 + 7;
	int n = coins.size();
	vector<int> dp(targetSum + 1,0);
	dp[0] = 1;
	
	for (int sum = 1; sum <= targetSum; sum++){
		
		for (int j = 0; j < n; j++){
			int coin = coins[j];
			if (sum - coin >= 0){
				dp[sum] = (dp[sum] % mod + dp[sum - coin] % mod) % mod;
			}
		}
	}
	
	return dp[targetSum];
}


int main(){
	
	int n, sum;
	cin >> n >> sum;

	vector<int> coins(n);
	for (int i = 0; i < n; i++){
		cin >> coins[i];
	}	
	
	int result = minimizingCoins(coins,sum);
	cout << result << endl;
	return 0;
}