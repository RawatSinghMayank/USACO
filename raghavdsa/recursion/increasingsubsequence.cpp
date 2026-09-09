#include<bits/stdc++.h>
using namespace std;

void helper(int arr[],int n,vector<int>v,int idx,int x){
    if(idx==n){
        if(v.size()==x){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";}
    cout<<endl;
            }    return;
  
    }
 if(v.size()+(n-idx)<x)return ; // to reduce time complexity otherwise no use.code can run without this statement
    helper(arr,n,v,idx+1,x);
    v.push_back(arr[idx]);
    helper(arr,n,v,idx+1,x);
}
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
 vector<int>v;
  helper(arr,n,v,0,3);
  
    }
