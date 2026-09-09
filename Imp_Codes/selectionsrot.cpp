#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int idx=-1;
    for(int i=0;i<n-1;i++){
     int min=INT_MAX;
     for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
idx=j;
        }
     }
     swap(arr[idx],arr[i]);
    }
        for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
return 0;}