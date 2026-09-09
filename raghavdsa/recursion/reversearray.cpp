#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int i,int j){
if(i>=j)return ;
swap(arr[i],arr[j]);
reverse(arr,i++,j--);
}
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a=0;
int b=n-1;
cout<<"after reversing "<<endl;
reverse(arr,a,b);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;}