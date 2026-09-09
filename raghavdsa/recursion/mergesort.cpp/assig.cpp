// Given an array where all its elements are sorted in increasing order except two swapped elements, 
// sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];

    int idx1=-1;
    int idx2=-1;
    for(int i=0;i<n-1;i++){

if(arr[i]>arr[i+1]){
    if(idx1==-1){idx1=i;
    idx2=i+1;}
    else idx2=i+1;
}
    }

    swap(arr[idx1],arr[idx2]);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;}