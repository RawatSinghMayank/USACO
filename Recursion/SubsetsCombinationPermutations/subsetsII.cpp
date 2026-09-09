#include<bits/stdc++.h>
using namespace std;

    void ans(set<vector<int>>&subsets,vector<int>&temp,vector<int>nums,int idx){
       
    subsets.insert(temp);
    for(int i=idx;i<nums.size();i++){
    temp.push_back(nums[i]);
    ans(subsets,temp,nums,i+1);
    temp.pop_back();
    }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
    vector<vector<int>>ans1;
    vector<int>temp;
    set<vector<int>>st;

        ans(st,temp,nums,0);
        for(auto i:st)
        {
            ans1.push_back(i);
        }
       return ans1;
    }

int main()
{
return 0;
}