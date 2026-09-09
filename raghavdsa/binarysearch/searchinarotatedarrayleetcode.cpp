
#include<bits/stdc++.h>
#include<vector>
using namespace std;

    void reverse( vector<int>&nums,int m,int n){

for(int i=m,j=n;i<j;i++,j--){
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    
}
    }
   
int mountain(vector<int>& nums){
int high=nums.size()-2;
int low=1;
while(low<=high){
    int mid=(low+high)/2;
    if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
        return mid;
    }else if(nums[mid]<nums[mid-1]) 
    high=mid-1;
    else low=mid+1;
}
return -1;
 }
    int searchop(vector<int>& nums, int target) {
        int lol=mountain(nums);
reverse(nums,0,mountain(nums));     reverse(nums,lol+1,nums.size()-1);
        reverse(nums,0,nums.size()-1);
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){ return mid;}
            else if(nums[mid]<target){
                low=mid+1;}
                else high=mid-1;
            }
      return -1;  }
    

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter target "<<endl;
    int target;
    cin>>target;
int f=searchop(v,target);
cout<<f;


}