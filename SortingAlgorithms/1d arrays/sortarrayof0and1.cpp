// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr;
//     cout<<"enter size "<<endl;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";}cout<<endl;
//     int zero=0,one=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0) zero++;
//        else one++;
//     }
//     for(int i=0;i<zero;i++){
//         arr[i]=0;
//     }
//     for(int i=zero;i<n;i++){
//         arr[i]=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";}
//         return 0;}


// ONe loop only
#include<bits/stdc++.h>
using namespace std;
  
 

int main(){
    vector<int>arr;
    cout<<"enter size "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
 int i=0,j=n-1;
 while(i<j){
    if(arr[i]==0) i++;
    if(arr[j]==1)j--;
    if(i>j) break;
    if(arr[i]==1 && arr[j]==0){
    arr[i]=0;
    arr[j]=1;
    i++;j--;} 
 }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}

         