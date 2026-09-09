// #include <iostream>
// using namespace std;
// int main(){
// cout<<"enter the no of elements in the array"<<endl;
// int n;
// cin>>n;
// int arr[n];
// cout<<"enter the elements"<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]>arr[j]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }int c=0;
// int a=0;
// int arr1[n];
// for(int i=0;i<n;i++){
//     if(arr[i]==arr[i+1]){
// c++;
// continue;}
// else{
//     arr1[a]=arr[i];
//     a++;}
// }
// arr1[a]=arr[n-1];
//  cout<<"printing final array ";
// for(int i=0;i<(n-c);i++){
//     cout<<arr1[i]<<" ";
// }
// return 0;}


// Second method

// #include <iostream>
// using namespace std;
// int duplicate(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]>arr[j]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }}
//     int newarr[n];
//     if(n==0 || n==1 ){
//         return n;}
// int j=0;        for(int i=0;i<n;i++){
//             if(arr[i]!=arr[i+1]){
//                 newarr[j++]=arr[i];
//             }
// }
// newarr[j]=arr[n-1];

// for(int i=0;i<j;i++){
// arr[i]=newarr[i];
// }
// return j;
// }
// int main(){
//     cout<<"enter the no of elements in the array "<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// int x=duplicate(arr,n);
// cout<<"finall array"<<endl;
// for(int i=0;i<x;i++){
//     cout<<arr[i]<<" ";}

// return 0;}

// Storing in same array 

#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }}
    if(n==0 || n==1 ){
        return n;}
int j=0;        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                arr[j++]=arr[i];
            }
}
arr[j]=arr[n-1];
return j;
}
int main(){
    cout<<"enter the no of elements in the array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int x=duplicate(arr,n);
cout<<"finall array"<<endl;
for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";}

return 0;}
