#include<bits/stdc++.h>
using namespace std;
 void SelectionSort(vector<int>&arr,int row,int col,int maxidx){
   if(row==0)return;
   if(col<row){
    if(arr[col]>arr[maxidx])maxidx=col;
    SelectionSort(arr,row,col+1,maxidx);
   }
   else{
    swap(arr[maxidx],arr[row]);
    SelectionSort(arr,row-1,0,row-1);
   }
 }
int main()
{
 int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n-1,0,n-1);
    for (auto i:arr){
        cout<<i<<" ";
    }
  
return 0;
}