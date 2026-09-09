#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll dpSum[16][2];
ll dpCount[16][2];

pair<ll,ll> solve(string &num, int pos, int tight) {

    if (pos >= num.size()) {
        return {0, 1};//sum, count
    }

    if (dpSum[pos][tight] != -1) {
        return {dpSum[pos][tight], dpCount[pos][tight]};
    }

    ll sum = 0, count = 0;
    int upperBound = (tight) ? num[pos] - '0': 9;
    for (int digit = 0; digit <= upperBound; digit++) {
        auto it = solve(num, pos + 1, (tight && (upperBound == digit)));
        sum += it.first;
        count += it.second;
        sum += digit * it.second;
    }
    
    dpSum[pos][tight] = sum;
    dpCount[pos][tight] = count;
    return {sum, count};
}

unsigned long long range(unsigned long long num) {
    string number = to_string(num);
    memset(dpSum,-1,sizeof(dpSum));
    memset(dpCount,-1,sizeof(dpCount));
    return solve(number, 0, 1).first;
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        unsigned long long L, R;
        cin >> L >> R;

        int count = 0;
        unsigned long long temp = L;
        while (temp != 0) {
            count += (temp % 10);
            temp /= 10;
        }
        cout << range(R) - range(L) + count << endl;
    }

    return 0;
}