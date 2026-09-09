#include<bits/stdc++.h>
using namespace std;
void remove(string s,string ss,int idx){
if(idx>=s.length()){
    cout<<ss;
    return ;}
    if(s[idx]=='a') remove(s,ss,idx+1);
    else remove(s,ss+s[idx],idx+1);
}
int main(){
string s="aaaaa";
//string ss="";
remove(s,"",0);
}