#include<bits/stdc++.h>
using namespace std;
void helper(string ans,string original,vector<string>&ans1){
if(original.length()==0){
ans1.push_back(ans);
return ;}
for(int i=0;i<original.length();i++){
    char ch=original[i];
    string left=original.substr(0,i);
    string right=original.substr(i+1);
    helper(ans+ch,left+right,ans1);

}}
int main(){
    int n,k;
    cin>>n>>k;
    string original="";
for(int i=1;i<=n;i++){
    original=original+to_string(i);
}  
    vector<string>ans1;

helper("",original,ans1);
cout<<ans1[k-1];
return 0;
}