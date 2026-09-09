#include<bits/stdc++.h>
using namespace std;
int check(string s,int i){
if(i>=s.length()/2)
return true;
else {
    if(s[i]!=s[s.length()-1-i])return false;
    return (s,i+1);
}
}

int main(){
    string s;
    cin>>s;
 int i=0;   cout<<check(s,i);
}