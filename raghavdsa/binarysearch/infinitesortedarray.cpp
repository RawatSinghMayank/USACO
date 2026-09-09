#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            cout<<" search successful"<<endl;
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
}
int infinite(int arr[],int key){
    int low=0;
    int high=1;
    int val=arr[0];
    while(val<key){
        low=high;
        high=2*high;
        val=arr[high];
    }
    binary(arr,low,high,key);
}
int main(){
    int arr[]={1,3,5,6,7,19,20,32,35,36,36,40,50,60,100,288,2000};
    int key=2000;
    cout<<infinite(arr,key);
}