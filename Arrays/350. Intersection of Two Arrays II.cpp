class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int>ans;
        while(i< nums1.size() &&j< nums2.size()){
            if(nums1[i]<nums2[j]){
                
            i++;}
    
              else   if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                    i++;j++;
                }

            
            else{
              
                j++;
            }
        }
      
        return ans;
    
    }
};


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        } // so  we have to use less memory 
     unordered_map<int,int>mp;
     for(const auto&i:nums1){
    mp[i]++;
     }
     vector<int>ans;
     for(auto i:nums2){
        if(mp[i]>0){
            ans.push_back(i);
            mp[i]--;
        }
     }    return ans;}
};