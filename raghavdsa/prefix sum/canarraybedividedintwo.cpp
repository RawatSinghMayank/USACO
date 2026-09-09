#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,10,5};
int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    arr[i]=arr[i]+arr[i-1];

for(int i=0;i<n;i++){
    if(2*arr[i]==arr[n-1]){
        cout<<"yes and the idx is "<<i<<endl;
        break;}
}
}