#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
if(n<=0)return ;
else {
 cout<<arr[n-1];
 print(arr,n-1);
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    return 0;}