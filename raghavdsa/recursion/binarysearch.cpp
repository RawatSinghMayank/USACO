#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int target){

if(low>high)return -1;
int mid=low+(high-low)/2;
if(arr[mid]==target)return mid;
else if(arr[mid]<target)
binarysearch(arr,mid+1,high,target);
else binarysearch(arr,low,mid-1,target); 

}
int main(){
    int arr[]={1,3,5,6,7,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    if(binarysearch(arr,0,n-1,0))cout<<"element found at idx "<<binarysearch(arr,0,n-1,0);
    else cout<<"element not found ";
    return 0;}