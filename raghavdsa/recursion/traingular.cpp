#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v,int n){
if(n==0)return;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
if(i!=0){
    v[i-1]=v[i]+v[i-1];
}
}
cout<<endl;
print(v,n-1);


}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    print(v,n);
    return 0;}
