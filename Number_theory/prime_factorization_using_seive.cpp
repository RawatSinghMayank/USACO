#include <bits/stdc++.h>
using namespace std;

vector <int> smallest_prime_factor (){

    int n=1000000;
    vector <int> spf(n+1);
    for (int i=0; i<=n ;i++){
        spf[i]=i;
    }

    for (int i=2; i*i <= n; i++){
        if (spf[i]==i){
            for (int j=i*i; j<=n ;j+=i){    
                if (spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
return spf;
}

int main(){
    vector <int> spf=smallest_prime_factor();
    int t;
    cin>>t; 
    while(t--){
        int n; 
        cin >> n;
        while (n != 1){
            cout << spf[n] << endl;
            n = n / spf[n];
        }   
        cout << endl;
    }
return 0;
}
