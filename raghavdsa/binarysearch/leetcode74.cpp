#include<bits/stdc++.h>
using namespace std;
bool binary(vector<int>&v,int target){
    int n=v.size();
int low=0;
int high=n-1;
while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]==target){
        return true;
    }
    else if(v[mid]<target){
        low=mid+1;}
        else high=mid-1;
    }
    return false;}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
  
        int m=matrix.size();
        int n=matrix[0].size();
int i=0;
int j=n-1;
int ans=0;
while(i<m){
    if(matrix[i][j]>target){
       ans= binary(matrix[i],target);
        break;
    }
    else {
        i++;
    }
}
if(ans==1){ return true;}
else return false;}




    
int main(){
    vector<vector<int>>v;
    for(int i=0;i<3;i++){
        vector<int>y;
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            y.push_back(x);
        }
        v.push_back(y);

    }
    int target=30;
    
int ans=searchMatrix( v,  target) ;
cout<<ans;
}