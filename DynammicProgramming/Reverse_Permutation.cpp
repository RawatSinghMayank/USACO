
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string str;
    cin >> str;

    deque<int> dq;
    bool rev = false;
    for (int k = 1; k <= n; k++) {
        
        if (rev) {
            dq.push_front(k);
        } else {
            dq.push_back(k);
        }
        if (str[k - 1] == 'o') rev = !rev;
    }
    
    if (rev) reverse(dq.begin(),dq.end());
    for (int &num : dq) {
        cout << num << " ";
    }

    return 0;
}