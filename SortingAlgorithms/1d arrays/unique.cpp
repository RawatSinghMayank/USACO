#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
     cout<<"enter the size of array "<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    } 
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
  if(arr[i]>max){
    max=arr[i];
  }
  else if(arr[i]<min){
    min=arr[i];
  }
    }
 vector<int>h(max+1);
 for(int i=0;i<n;i++){
    h[arr[i]]++;
 }
 for(int i=min;i<=max;i++){
    if(h[i]==1){
        cout<<"Unique element in the array is:"<<i;
    }
 }
}
    
