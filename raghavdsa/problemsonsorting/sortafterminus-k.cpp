#include <bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b)return a;
    else return b;
}
float min(float a,float b){
    if(a<b)return a;
    else return b;
}
int  main(){
    bool flag=false;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else {
             kmax=min(kmin,(arr[i]+arr[i+1])/2.0);}
    
    if(kmax<kmin){
flag=true;
break;}
    }
    if(flag==true)
    cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<kmin;}
            else cout<<-1;}
            else 
            {
                if(kmin-(int)kmin>0){
                    kmin=(int)kmin+1;
                    cout<<kmin<<":"<<(int)kmax;
                }
            }
}