#include<bits/stdc++.h>
using namespace std;
int main(){    int bit;int idx;
    cout<<"enter n "<<endl;
    int n;
    cin>>n;   
    vector<string>v;
for(int i=0;i<n;i++){
    string s;
    cin>>s;

    v.push_back(s);
}int first=stoi(v[0]);
for(int i=0;i<n;i++){
    int sum=stoi(v[i]);
if(sum>first){
    bit=sum;
    idx=i;}
    else bit=first;
    idx=i;
}
cout<<idx;
}