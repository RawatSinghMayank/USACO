#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(10);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"enter X "<<endl;
    int x;
    cin>>x;
int c=0;
for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
        cout<<"last occurence of x is : "<<i<<endl;
        break;
    }
}
return 0;}