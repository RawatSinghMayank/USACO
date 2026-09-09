#include<bits/stdc++.h>
using namespace std;
void print(int idx,int arr[],vector<int>v,int s,int sum,int n){
if(idx>=n){
    if(s==sum){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";}
    }
    cout<<endl;
    return ;
}
v.push_back(arr[idx]);
s=s+arr[idx];
print(idx+1,arr,v,s,sum,n);
s=s-arr[idx];
v.pop_back();
print(idx+1,arr,v,s,sum,n);}
int main(){
    int arr[]={1,2,1};
    vector<int>v;
    print(0,arr,v,0,2,3);
    return 0;}