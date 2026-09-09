#include<bits/stdc++.h>
using namespace std;
vector<int>result(vector<int>nums,int idx,int target){
vector<int>ans;
if(idx==nums.size()){
    return ans;
}
if(nums[idx]==target){
    ans.push_back(idx);
}
vector<int>ansFromBelowCalls=result(nums,idx+1,target);
ans.insert(ans.end(),ansFromBelowCalls.begin(),ansFromBelowCalls.end());
return ans;

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x "<<endl;
    cin>>x;
    vector<int>ans=result(v,0,x);
    for(auto i:ans){
        cout<<i<<" ";
            }
    return 0;}