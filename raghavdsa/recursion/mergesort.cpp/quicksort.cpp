#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&nums,int low,int high){
    int pivot=nums[low];
    int i=low;
    int j=high;
    while(i<j){
while(nums[i]<=pivot && i<=high-1)
i++;
while(nums[j]>pivot && j>=low+1)
j--;
if(i<j)
swap(nums[i],nums[j]);
    }
    swap(nums[j],nums[low]);
    return j;}

void quick(vector<int>&v,int low,int high){
if(low<high){
    int pivot=partition(v,low,high);
    quick(v,low,pivot-1);
    quick(v,pivot+1,high);
}
}
int main(){
    int arr[]={3,5,6,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
quick(v,0,n-1);
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
return 0;}



