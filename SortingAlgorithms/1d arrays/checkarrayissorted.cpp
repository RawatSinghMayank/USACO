#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr;
 cout<<"enter the size of array "<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=true;
        }
    }
    if(flag==true) cout<<"not sorted "<<endl;
    else cout<<"sorted"<<endl;
}