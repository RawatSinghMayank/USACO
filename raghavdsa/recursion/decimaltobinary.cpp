#include<bits/stdc++.h>
using namespace std;
void  binary(int n,string& ans){
    if(n==0){
    return ;
     }
     else {
    binary(n/2,ans);
    if(n%2==0){
        ans=ans+'0';
    }
    else ans=ans+'1';
     }
}
    
      
int main(){
    int n;
    cin>>n;
    string ans="";
 binary(n,ans);
 cout<<ans;
return 0;}