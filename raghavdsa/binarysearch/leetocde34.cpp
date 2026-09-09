#include<bits/stdc++.h>
using namespace std;

int lower(vector<int>& nums1, int target){
int n=nums1.size();
int high=n-1;
int low=0;
int ans=n;
while(low<=high){
int mid=(low+high)/2;
if(nums1[mid]>=target){
ans=mid;
high=mid-1;
}
else
low=mid+1;
}

return ans;
}
int upper(vector<int>& nums2, int target){
int n=nums2.size();
int high=n-1;
int low=0;
int ans=n;
while(low<=high){
int mid=(low+high)/2;
if(nums2[mid]>target){
ans=mid;
high=mid-1;
}
else 
    low=mid+1;
}

return ans;
}
vector<int> display(vector<int>&nums,int target){
   int f= lower(nums,target);
    if(f==nums.size()|| nums[f]!=target){
        return {-1,-1};
    }
    else {
       int g=upper(nums,target);
        return {f,g-1};
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
int target;
cin>>target;
vector<int>x=display(v,target);
for(int i=0;i<x.size();i++){
    cout<<x[i]<<" ";
}}