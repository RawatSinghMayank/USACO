    #include<bits/stdc++.h>
    using namespace std;

    long long dp[19][2][2][2];

    long long countBoringNumbers(string &num, int pos, int tight, int leading, int even) {

        if (pos >= num.size()) {
            if (!leading) return 1;
            else return 0;
        }

        if (dp[pos][tight][leading][even] != -1) return dp[pos][tight][leading][even];

        long long count = 0;
        int upperBound = (tight) ? num[pos] - '0' : 9;

        for (int digit = 0; digit <= upperBound; digit++) {

            int newTight = (tight && (digit == upperBound));

            if (even) {
                
                if (!(digit & 1)) {
                    count += countBoringNumbers(num, pos + 1, newTight, 0, 0);
                }
            } else {

                if (leading && digit == 0) {
                    count += countBoringNumbers(num, pos + 1, newTight, 1, 0);
                } 
                if (digit & 1) {
                    count += countBoringNumbers(num, pos + 1, newTight, 0, 1);
                }
            }
        }
        return dp[pos][tight][leading][even] = count;
    } 

    long long countInRange(long long num) {

        memset(dp, -1, sizeof(dp));
        string number = to_string(num);
        return countBoringNumbers(number, 0, 1, 1, 0);
    }

    int main() {

        long long L, R;
        cin >> L >> R;
        cout << countInRange(R) - countInRange(L - 1) << endl;

        return 0;
    }