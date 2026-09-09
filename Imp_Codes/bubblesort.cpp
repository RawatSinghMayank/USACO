#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter n "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter numbers "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
}