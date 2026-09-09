#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter total no in array "<<endl;
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];}
      
    cout<<"original array "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    for(int i=0;i<n-1;i++){
     int min=INT_MAX;
     int idx=-1;
     for(int j=i;j<n;j++){
        if(v[j]<min){
            min=v[j];
            idx=j;}
     }
     swap(v[i],v[idx]);
    } for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
cout<<"enter k"<<endl;
int k;
cin>>k;

cout<<v[k-1]<<endl;    


}

