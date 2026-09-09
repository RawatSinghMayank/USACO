// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
// cin>>arr[i];
//     }
//     int low=0;
//     int high=n-1;
//     cout<<"enter the value of x "<<endl;
// int x;
// cin>>x;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(x==arr[mid]){ cout<<"lower bound is :"<<arr[mid-1]<<endl<<"upper bound is:"<<arr[mid+1]<<endl;
//         break;}
//         if(x<arr[mid]){
//             high=mid-1;}
//     else if(x>arr[mid]){
//         low=mid+1;}
//         if(x>arr[mid]&& x <arr[mid+1]){
//             cout<<"lower bound is : "<<arr[mid]<<endl;
//         cout<<"upper bound is : "<<arr[mid+1];
    
//     }
// }
// return 0;}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    cout<<"enter the value of x "<<endl;
int x;
cin>>x;
bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){ cout<<"floor is :"<<arr[mid]<<endl<<"ceil is:"<<arr[mid]<<endl;
       flag=true; break;}
       else  if(x<arr[mid]){
            high=mid-1;}
    else{
        low=mid+1;
        
}}
if(flag==false){
    cout<<"floor is :"<<arr[high]<<endl<<"ceil is:"<<arr[low]<<endl;
}
return 0;}