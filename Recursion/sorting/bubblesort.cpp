#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int>&arr,int row,int col){
if(row==0)return;
if(col+1<row){
    if(arr[col]>arr[col+1]){
        swap(arr[col],arr[col+1]);
    }
    bubble(arr,row,col+1);
}
else{
    bubble(arr,row-1,0);

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
    bubble(arr,n,0);
    for (auto i:arr){
        cout<<i<<" ";
    }
  
return 0;
}