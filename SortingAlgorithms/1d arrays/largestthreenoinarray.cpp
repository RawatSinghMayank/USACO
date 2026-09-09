#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    vector<int> arr;
    cout<<"enter the size of array "<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int max,min;
    int smax,smin;
    int tmax,tmin;
max=smax=tmax=INT_MIN;
min=smin=tmin=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        tmax=smax;
        smax=max;
        max=arr[i];
    }
    else if (arr[i]>smax && arr[i]!=max){
        smax=arr[i];
    }
    else if (arr[i]>tmax && arr[i]!=smax && arr[i]!=max){
        tmax=arr[i];
    }
    if(arr[i]<min){
        tmin=smin;
        smin=min;
        min=arr[i];
    }
    else if (arr[i]<smin && arr[i]!=min){
        smin=arr[i];
    }
    else if (arr[i]<tmin && arr[i]!=smin && arr[i]!=min){
        tmin=arr[i];
     }

}
cout<<"max ,smax and tmax are : "<<max<<","<<smax<<","<<tmax<<endl;
cout<<"min,smin and tmin are "<<min<<","<<smin<<","<<tmin<<endl;
return 0;}