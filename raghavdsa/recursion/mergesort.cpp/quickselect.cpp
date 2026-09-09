#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&nums,int low,int high){

    int i=low;
    int j=high;
        int pivot=nums[low];
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
int  quick(vector<int>&v,int low,int high,int k){
if(low<high){
    int pivot=partition(v,low,high);
   if(pivot+1==k)return v[pivot];
   else if(pivot+1<k) quick(v,pivot+1,high,k);
   else quick(v,low,pivot-1,k);

}
}
int main(){
    int arr[]={-8,-33,-9,0,2,99,-2,90,1};
    int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
int k=5;
cout<<quick(v,0,n-1,k);

return 0;}