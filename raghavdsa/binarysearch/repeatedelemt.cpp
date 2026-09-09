#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&v,int n){
     int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
    int mid=(low+high)/2;
        if(v[mid]==mid){
            return v[mid];}
            else if(v[mid]>mid){
                low=mid+1;}
                else { high=mid-1;}
    }
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
    int ans=binary(v,n);
    cout<<ans;
}
    