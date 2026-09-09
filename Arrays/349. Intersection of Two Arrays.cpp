class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int>ans;
        while(i< nums1.size() &&j< nums2.size()){
            if(nums1[i]<nums2[j]){
                
            i++;}
    
              else   if(nums1[i]==nums2[j]){
                if(ans.size()==0 || ans.back()!=nums1[i])    ans.push_back(nums1[i]);
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
     
        set<int>stans;
        for(auto i:nums2){
            if(st.find(i)!=st.end()){
                stans.insert(i);
            }
        }   
           vector<int>ans(stans.begin(),stans.end());
              return ans;}
};


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>st(nums1.begin(),nums1.end());
       vector<int>ans;
       for(auto i:nums2){
        if(st.find(i)!=st.end()){
       ans.push_back(i);
       st.erase(i);
        }
       } 
    return ans;}
};


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>st(nums1.begin(),nums1.end());
       set<int>st2(nums2.begin(),nums2.end());

       vector<int>ans;
       for(const auto &i:st){
        if(st2.find(i)!=st2.end()){
            ans.push_back(i);
        }
       } 
    return ans;}
};