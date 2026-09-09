#include<bits/stdc++.h>
using namespace std;
void intset(vector<int>v,vector<int>nums,int idx){
  if(idx==nums.size()){
    for(int i=0;i<v.size();i++)
    cout<<v[i];
  cout<<endl;
return;}
intset(v,nums,idx+1);
if(v.size()==0 || v[v.size()-1]==nums[idx-1]){
  v.push_back(nums[idx]);
  intset(v,nums,idx+1);
} 

}
  int main(){
vector<int>v;
vector<int>nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
intset(v,nums,0);


return 0;}
