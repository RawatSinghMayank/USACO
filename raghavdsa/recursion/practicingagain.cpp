#include<bits/stdc++.h>
using namespace std;
bool sub(int arr[],vector<int>v,int idx,int n,int s,int sum){
    if(idx>=n){ 
        if( s==sum){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";}
        cout<<endl;
        return true;}
        return false;}

v.push_back(arr[idx]);
s=s+arr[idx];
if(sub(arr,v,idx+1,n,s,sum))return true;
v.pop_back();
s=s-arr[idx];
if(sub(arr,v,idx+1,n,s,sum))return true;
return false;
}
   int main(){
        int arr[]={1,2,1};
        vector<int>v;
        int sum=2;
        int s=0;

        int n=sizeof(arr)/sizeof(arr[0]);
        sub(arr,v,0,n,s,sum);
        return 0;}