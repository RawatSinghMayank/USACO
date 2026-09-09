Problem link : https://www.naukri.com/code360/problems/number-of-balanced-binary-trees_1062690?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>

My solution
Time Complexity: O(2 ^ N)
Space Complexity: O(N)

using std::cout;
using std::endl;
using std::cin;

int countBalancedBinaryTree( int n)
{
    long long mod = 1e9+7;

    if (n<=1){
        return 1;
    }

    long long n_minusone_height = countBalancedBinaryTree(n-1);
    long long n_minustwo_height = countBalancedBinaryTree(n-2);
    long long first_combination = (n_minusone_height%mod * n_minusone_height%mod) %mod;
    long long second_combination = ((n_minusone_height%mod * n_minustwo_height%mod) %mod)*2;
    long long result = (first_combination%mod + second_combination%mod) %mod;
    
return result;
}

// too much time taking as constraints : time limit: 1 sec
int main(){

    int height;
    cin>>height;   
    cout<<countBalancedBinaryTree(height);

return 0;
}


 



Time Complexity: O(2 ^ N)
Space Complexity: O(N)
Where 'N' is the height of the balanced binary tree.
 

#include<bits/stdc++.h>
using namespace std;

    int countTree(int height)
    {
        //    Base case.
        if (height == 0 || height == 1)
        {
            return 1;
        }

        //    All operations to be done modulo 10^9+7.
        const int MOD = 1e9 + 7;
        
        int countOne = countTree(height - 1), countTwo = countTree(height - 2);

        //    Count all possiblities of the left and the right subtree.
        int noOfTrees = (( 2 * static_cast <long long>  (countOne) * countTwo) % MOD + ( static_cast <long long>  (countOne) * countOne) % MOD) % MOD;

        //    Return the number of balanced binary trees.
        return noOfTrees;
    }

int main(){

        int n;
        cin>>n;
    cout<<countTree(n);

return 0;
}








Recursive DP Approach
/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    Where 'N' is the height of the balanced binary tree.
*/

int countTree(int height, vector<int> &dp)
{
    //    Base case.
    if (height == 0 || height == 1)
    {
        return 1;
    }

    //    If the subproblem is already solved return the stored value.
    if (dp[height] != -1)
    {
        return dp[height];
    }

    //    All operations to be done modulo 10^9+7.
    const int MOD = 1e9 + 7;

    int countOne = countTree(height - 1, dp), countTwo = countTree(height - 2, dp);

    //    Count all possiblities of the left and the right subtree.
    int noOfTrees = ((2LL * countOne * countTwo) % MOD + (1LL * countOne * countOne) % MOD) % MOD;

    //    Store the answer.
    dp[height] = noOfTrees;

    //    Return the number of balanced binary trees.
    return dp[height];
}

int countBalancedBinaryTree(int n)
{
    //    For storing results of subproblems.
    vector<int> dp(n + 1, -1);

    int ans = countTree(n, dp);

    return ans;
}









Iterative DP
/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    Where 'N' is the height of the balanced binary tree.
*/

int countBalancedBinaryTree(int n)
{
    //    For storing the result of the subproblems.
    vector<int> dp(n + 1);

    //    Initialise the values.
    dp[0] = dp[1] = 1;

    //    All calculations need to done modulo 1e9+7.
    const int MOD = 1e9 + 7;

    //    Iterate till n.
    for (int i = 2; i <= n; i++)
    {
        //    Calculate the value of dp[i].
        dp[i] = ((2LL * dp[i - 1] * dp[i - 2]) % MOD + (1LL * dp[i - 1] * dp[i - 1]) % MOD) % MOD;
    }
 // LL is long long
    return dp[n];
}









Constant Space Approach

/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where 'N' is the height of the balanced binary tree.
*/

int countBalancedBinaryTree(int n)
{
     if (n==0) {
        return 0;
    }
    //    For storing the result of previous two heights.
    const int mod = 1e9+7;
    long long prev_one = 1;
    long long prev_two = 1;
   
    //    Iterate till n.
    for (int i = 2; i <= n; i++)
    {
        //    Calculate the answer for the current height.
        int current_height= ((prev_one*prev_one)%mod + (2*prev_two*prev_one)%mod)%mod;
        
        //    Change the values of the previous two levels.
        prev_two=prev_one;
        prev_one=current_height;

    }

    //    Return the value of the last level.
    
    return prev_one;
}