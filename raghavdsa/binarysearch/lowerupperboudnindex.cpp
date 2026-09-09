// #include<bits/stdc++.h>
// using namespace std;
// int main(){

    
// int arr[]={2,3,6,7,8,8,11,11,11,12};
// int n=(sizeof(arr)/sizeof(arr[0]));
//     int low=0;
//     int high=n-1;
//     cout<<"enter the value of x "<<endl;
// int x;
// cin>>x;
// int ans=n;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]>=x){
//  ans =mid;
//  high=mid-1;
//     }
//     else {
//         low=mid+1;}
// }
// cout<<ans;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){

    
int arr[]={2,3,6,7,8,8,11,11,11,12};
int n=(sizeof(arr)/sizeof(arr[0]));
    int low=0;
    int high=n-1;
    cout<<"enter the value of x "<<endl;
int x;
cin>>x;
int ans=n;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>x){
 ans =mid;
 high=mid-1;
    }
    else {
        low=mid+1;}
}
cout<<ans;
}