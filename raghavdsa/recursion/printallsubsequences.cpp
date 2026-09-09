#include<bits/stdc++.h>
using namespace
std;
void print(int arr[],vector<int>v,int n ,int idx){

    if(idx>=n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        if(v.size()==0)cout<<"{}"<<endl;
        return ;
    }
    v.push_back(arr[idx]);
    print(arr,v,n,idx+1);
    v.pop_back();
print(arr,v,n,idx+1);
}
int main(){
    int arr[]={1,2,3,4};
    vector<int>v;
    print(arr,v,4,0);
    return 0;}