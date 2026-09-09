// #include<bits/stdc++.h>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     cout<<"enter total no in array "<<endl;
//     int n;
//     cin>>n;
//     int v[n];
//     for(int i=0;i<n;i++){
//         cin>>v[i];}
      
//     cout<<"original array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     arr[i]=v[i];}
//    sort(arr,arr+n);
//    int a=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i]==v[j]){
//             v[j]=a++;}}}





//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;
// int main(){
//     cout<<"enter total no in array "<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];}
      
//     cout<<"original array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int x=0;
// vector<int>v(n,0);
// for(int i=0;i<n;i++){
//     int min=INT_MAX;
//     int idx=-1;
//     for(int j=0;j<n;j++){
//         if(v[j]==1)
//         continue;
//         else {
//             if(arr[j]<min){
//                 min=arr[j];
//                 idx=j;}
//         }
//     }
//     arr[idx]=x++;
// v[idx]=1;
// }  
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    cout<<"enter total no in array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
      
    cout<<"original array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;
for(int i=0;i<n;i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=0;j<n;j++){
        if(arr[j]<=0)continue;
        else {
            if(arr[j]<min){
                min=arr[j];
                idx=j;}
        }
    }
    arr[idx]=-x;
    x++;

}
for(int i=0;i<n;i++){
    arr[i]=-arr[i];
    cout<<arr[i]<<" ";
}
}



