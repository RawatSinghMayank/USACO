#include<bits/stdc++.h>
using  namespace std;
void cyclic(vector<int>&arr){
    int n=arr.size();
    int i=0;
 while(i<n){
    int ci=arr[i]-1;
    if(ci==i)i++;
    else swap(arr[i],arr[ci]);
 }
}
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
   int n=sizeof(arr)/sizeof(arr[0]); 
    vector<int>v(arr,arr+n);
    cyclic(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";}
        return 0;}
