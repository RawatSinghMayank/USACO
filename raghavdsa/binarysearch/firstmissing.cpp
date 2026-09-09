#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={2,3,4,5,7,8,9,10};
int n=(sizeof(arr)/sizeof(arr[0]));
    
// for(int i=0;i<n;i++){
//     if(i!=arr[i]){
//         cout<<i;
//         break;
//     }
// }}
int ans=-1;
int high=n-1;
int low=0;
while(low<=high){
    int mid=(low+high)/2;
    if(mid!=arr[mid]){
ans=mid;
high=mid-1;}
else low=mid+1;

}
cout<<ans;
}