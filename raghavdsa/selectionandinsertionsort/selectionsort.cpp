#include <bits/stdc++.h>
#include<climits>
#include<algorithm>
using  namespace std;
int main(){
    vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
        v.push_back(x);
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}


for(int i=0;i<n-1;i++){ int min=INT_MAX;
        int minindex=-1;
    for(int j=i;j<n;j++){
        if(v[j]<min){
            min=v[j];
            minindex=j;
        }}
        swap(v[i],v[minindex]);
    
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}