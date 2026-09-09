#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];}
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
int sum1=(n*(n+1))/2;
if(sum1>sum){
    
cout<<"ans is "<<sum1-sum;}
else { cout<<"ans is"<<sum-sum1;}
}