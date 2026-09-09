#include<bits/stdc++.h>
using namespace std;
int lastoccurence(vector<int>&nums2,int target){
    int n=nums2.size();
int high=n-1;
int low=0;
int ans=n;
while(low<=high){
int mid=(low+high)/2;
if(nums2[mid]==target){
ans=mid;
low=mid+1;
}
else if(nums2[mid]<target){
    low=mid+1;}
    else
high=mid-1;
}

return ans;
}
int main(){
    vector<int>v;
    int target=3;
    v.push_back(1);
      v.push_back(2);  v.push_back(3);  v.push_back(3);  v.push_back(4);  v.push_back(4);  v.push_back(4);
        v.push_back(5);
        cout<<lastoccurence(v,target);
}