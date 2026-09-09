#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n,int idx,int s,int sum){
    if(idx==n){
        if(s==sum)
          return 1;
          else return 0;}
    

    s=s+arr[idx];
     int l= print(arr,n,idx+1,s,sum);
            s=s-arr[idx];

           int r= print(arr,n,idx+1,s,sum);
               
               return l+r;
}
int main(){
    int arr[]={1,2,1};

    cout<<print(arr,3,0,0,2);
}
