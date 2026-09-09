#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter n "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter sorted  numbers "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low=0;
int high=n;
int mid=(low+high)/2;
cout<<"enter k "<<endl;
int k;
cin>>k;
while(low<=high){
    mid=(low+high)/2;
if(k==arr[mid]){
    cout<<"search successful "<<endl;
    return arr[mid];
}
else if(k<arr[mid]){
    high=mid-1;
}
else { low=mid+1;
}
}
cout<<"search unsuccessful "<<endl;
return 0;}