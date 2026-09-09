// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;
// int count(vector<int>&v){
//     int n=v.size();
// int low=0;
// int high=n-1;
// int ans=n;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(v[mid]>=1){
//         ans=mid;
//         high=mid-1;
// }
// else low=mid+1;
// }
// return n-ans;
// }

// int main(){
// cout<<"enter no of rows and columns "<<endl;
// int m,n;
// cin>>m>>n;
// vector<vector<int>>v;

// cout<<"enter elements "<<endl;
// for(int i=0;i<m;i++){    vector<int>f;
//     for(int j=0;j<n;j++){
//     int x;
//     cin>>x;

//     f.push_back(x);
// }
// v.push_back(f);
// }
// int idx=-1, max=0, maxcount=0;
// for(int i=0;i<m;i++){
//     maxcount=count(v[i]);
//     if(maxcount>max){
//         max=maxcount;
//         idx=i;}
// }
// cout<<"max no of ones is :"<<max<<"idx : "<<idx;}
#include<bits/stdc++.h>
using namespace std;
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0;
        int ans=-1;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==mid){
                ans=mid;
                high=mid-1;
    
            }
            else if(nums[mid]==mid+1)low=mid+1;
            else { high=mid-1;}
        
        }
   return ans; }
int main(){
    vector<int>v;
    v.push_back(2);   v.push_back(2);   v.push_back(2);   v.push_back(2);   v.push_back(2);
    cout<<findDuplicate(v);
}