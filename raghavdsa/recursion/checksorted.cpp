#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n,int idx){

if(idx>=n)return 1;
if(arr[idx]<arr[idx-1])return 0;
sorted(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,9,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< sorted(arr,n,1);
}