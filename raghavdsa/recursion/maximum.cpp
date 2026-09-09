#include<bits/stdc++.h>
using namespace std;
int max1(int arr[],int n,int idx,int maxi){


if(idx>=n){
return maxi;}

if(arr[idx]>maxi)
maxi=arr[idx];
max1(arr,n,idx+1,maxi);}

int maxi2(int arr[],int n,int idx){
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxi2(arr,n,idx+1));

}
int main(){
    int arr[]={3,2,5,6,10,44,34,63};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<max1(arr,n,0,INT_MIN);
    cout<<maxi2(arr,n,0);
    return 0;}