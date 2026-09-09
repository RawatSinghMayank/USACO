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
        if(arr[i]<0)i++;
        if(arr[j]>0)j--;
        if(i>j) break;
        if(arr[i]>0 && arr[j]<0){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
        i++;j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;}