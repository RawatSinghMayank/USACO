#include<bits/stdc++.h>
using namespace std;
int findIndex(int arr[], int x, int size) {
 if(size==0)return -1;
 if(arr[size-1]==x)return size-1;
 return findIndex(arr,x,size-1);
}
int lastIndexfromStarting(int arr[],int x,int size){
if(size==0)return -1;
int lastindex=lastIndexfromStarting(arr+1,x,size-1);
if(lastindex!=-1)return lastindex+1;
if(arr[0]==x)return 0;
else return -1;
}
    int main(){
        int arr[]={1,2,-3,2,3,3,5,3,63,3,4,35,3,3,53,2};
        cout<< lastIndexfromStarting(arr,3,sizeof(arr)/sizeof(arr[0]));
        return 0;
    }