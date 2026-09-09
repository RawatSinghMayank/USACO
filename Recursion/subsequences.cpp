#include<bits/stdc++.h>
using namespace std;
void subSequences(string str,vector<string>&ans){
  if(str.length()==0){
    ans.push_back("");
    return;
  }
  subSequences(str.substr(1),ans);
  int n=ans.size();
  for(int i=0;i<n;i++){
    ans.push_back(str[0]+ans[i]);
  }
}
void subSequences2(string str,string temp,int idx,vector<string>&ans){
    if(idx==str.size()){
    ans.push_back(temp);
    return;
    }
    subSequences2(str,temp,idx+1,ans);
    temp.push_back(str[idx]);
    subSequences2(str,temp,idx+1,ans);
    }
    
int main()
{
string str;
cin>>str;
vector<string>ans;
subSequences2(str,"",0,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
return 0;
}