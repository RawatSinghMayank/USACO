#include<bits/stdc++.h>
using namespace std;
bool print(int arr[],vector<int>v,int n,int idx,int s,int sum){
    if(idx==n){
        if(s==sum){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";}
                return true;}
                else return false;
    }
    v.push_back(arr[idx]);
    s=s+arr[idx];
        if(print(arr,v,n,idx+1,s,sum)){            return true;}
            s=s-arr[idx];
            v.pop_back();
            if(print(arr,v,n,idx+1,s,sum)){
                return true;}
                return false;
}
int main(){
    int arr[]={1,2,1};
    vector<int>v;
    print(arr,v,3,0,0,2);
}
