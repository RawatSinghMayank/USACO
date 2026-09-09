#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,5,3,2,7,6};
  
    int sum=0;
  for(int i=0;i<7;i++){ 
    sum=sum+arr[i];
    arr[i]=sum;
  }
  for(int i=0;i<7;i++)
  cout<<arr[i];
}