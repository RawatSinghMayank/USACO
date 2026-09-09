#include <bits/stdc++.h>
#define int long long
using namespace std;
    1 2 3 4 5 6 7 8 9 10
    
 int josephus(int n, int k) {
        // code here
        
        vector<int> person(n);
        for (int i = 0; i < n; i++) {
            person[i] = i + 1;
        }
        
        int i = 0, count = 0,alive = n;
        
        while (alive != 1) {
            if (person[i % n] != -1) {
                count++;
            }
            
            if (count == k) {
                person[i % n] = -1;
                count = 0;
                alive--;
            }
            i++;
        }
        
        for (int i = 0; i < n; i++) {
            if(person[i] != -1) return person[i];
        }
        return -1;
    }

signed main() {
    
    freopen("joseph.in", "r", stdin);
    freopen("joseph.out", "w", stdout);

    int n,k;
    cin >> n >> k;
    cout << josephus(n,k);
    return 0;
}