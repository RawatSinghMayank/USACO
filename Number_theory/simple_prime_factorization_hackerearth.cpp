// https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/simple-prime-factorization/

#include <bits/stdc++.h>
using namespace std;

vector <int> smallest_prime_factor (){

    int n = 1000000;
    vector <int> spf (n+1);

    for (int i=0 ;i <= n; i++){
        spf[i]=i;
    }

    for (int i=2; i*i <= n; i++){
        if (spf[i] == i){
            for (int j = i*i ;j <= n ;j += i){
                if (spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
return spf;
}

int main(){

    vector <int> spf = smallest_prime_factor();
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int num;
        cin>>num;
       string ans;
        map <int, int> freq;
        if (spf[num] == num){
            cout<<"2^0"<<endl;
            continue;
        } 
        
        else{
            if (spf[num] != 2)  freq[2]=0;
            while (num != 1){
                freq[spf[num]]++;
                num /= spf[num];
            }
             ans="";
            for (auto &it : freq){
                ans+=to_string(it.first)+"^"+to_string(it.second);
                ans+="*";
            }
        }
        ans.pop_back();
        cout<<ans<<endl;
    }
return 0;   
}