#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>&arr2){
int i=0,j=0,k=0;
vector<int>arr3(arr1.size()+arr2.size());
while(i<arr1.size() && j<arr2.size()){
    if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
    }
else 
      arr3[k++]=arr2[j++];
}
for(i;i<arr1.size();i++){
    arr3[k++]=arr1[i];}
    for(j;j<arr2.size();j++){
        arr3[k++]=arr2[j];
    }
return arr3;
}
int main(){
    vector<int>arr1;
    vector<int>arr2;
    cout<<"enter size of array one "<<endl;
    int n1;
    cin>>n1;
    cout<<"enter elements "<<endl;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

  cout<<"enter size of array two "<<endl;
    int n2;
    cin>>n2;
    cout<<"enter elements "<<endl;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    vector<int>arr3=merge(arr1,arr2);
for(int i=0;i<arr3.size();i++){
    cout<<arr3[i]<<" ";
}

    return 0;}