// // #include <iostream>
// // int main(){
// //     int n;
// //     using namespace std;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int max=arr[0],min=arr[0];
// //     for(int i=0;i<n;i++){
// //         if(arr[i]>max){
// //             max=arr[i];}
// //             if(arr[i]<min){
// //                 min=arr[i];}}
// // int smax=min;
// // int smin=max;
// // for(int i=0;i<n;i++){
// //     if(arr[i]<max && arr[i]>smax){
// //         smax=arr[i];}
// //         if(arr[i]>min && arr[i]<smin){
// //             smin=arr[i];}
// // }
// // cout<<"first max"<<max<<endl;
// // cout<<"sec max"<<smax<<endl;
// // cout<<"first min"<<min<<endl;
// // cout<<"sec min"<<smin<<endl;
// // return 0;}

// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//      int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=INT_MIN;
//     int min=INT_MAX;

//     for(int i=0;i<n;i++){
//  if(arr[i]<min){
//     min=arr[i];}
//     else if (arr[i]>max){
//         max=arr[i];
//     }
//     }
//     cout<<"max and min  are "<<max<<","<<min<<endl;

// // int smax=min;
// // int smin=max;
// // for(int i=0;i<n;i++){
// // if(arr[i]>smax && arr[i]<max){
// //     smax=arr[i];
// // }
// //  if (arr[i]<smin && arr[i]>min){
// //     smin=arr[i];
// // }
// // }
// int smax=INT_MIN;
// int smin=INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]>smax && arr[i]!=max){
//         smax=arr[i];}
//         if(arr[i]<smin && arr[i]!=min){
//             smin=arr[i];}
// }
// cout<<"sec max and sec min are "<<smax <<","<<smin<<endl;
// }
#include<iostream>
#include <climits>
using namespace std;
int main(){
       int n;
           cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    int min=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
        if(arr[i]<min){
            smin=min;
            min=arr[i];
        }
        else if (arr[i]<smin && arr[i]!=min){
            smin=arr[i];
        }
    }
    if(smax==INT_MIN && smin==INT_MAX){
        cout<<"second element does not exist "<<endl;
        cout<<"max="<<max<<endl<<"min "<<min<<endl;
    }
    else
    cout<<"max="<<max<<endl<<"min="<<min<<endl<<"smax ="<<smax<<endl<<"smin = "<<smin<<endl;
}