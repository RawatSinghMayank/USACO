#include<bits/stdc++.h>
using namespace std;
int count(vector<int>&v,int n){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]>=1){
        ans=mid;
        high=mid-1;
}
else low=mid+1;
}
return ans;
}
int main(){

vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int ans=count(v,n);
if(ans==-1){
    cout<<0;}
    else cout<<n-ans;

}