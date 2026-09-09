#include<bits/stdc++.h>
using namespace std;

    bool checkPangram (string s) {
    int n=s.length();
    vector<int>v(26);
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            v[s[i]-65]++;
        }
        else if(s[i]>=97 && s[i]<=122){
            v[s[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(v[i]==0)return 0;
       
    }
    return 1;
    
    }
    int main(){
        string s="Bawds jog, flick quartz, vex nymph";
        int d=checkPangram(s);
cout<<d;
    }