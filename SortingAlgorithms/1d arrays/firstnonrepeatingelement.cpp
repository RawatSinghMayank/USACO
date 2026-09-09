#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    cout<<"enter size "<<endl;
    int n;
    cin>>n;
    cout<<"enter elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }int c=0;
    for(int i=0;i<n;i++){
        c=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            c++;
        }
    }
    if(c==1){
        cout<<"first non repeating element is ::"<<arr[i];
        break;
    } }
    return 0;}

