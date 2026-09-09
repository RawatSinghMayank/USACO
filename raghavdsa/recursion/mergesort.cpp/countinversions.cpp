#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&a,vector<int>&b,vector<int>&v){
int i=0,j=0,k=0;int count=0;
while(i<a.size() &&j<b.size()){
    if(a[i]<=b[j])
v[k++]=a[i++];
else {
    count=count+(a.size()-i);
    v[k++]=b[j++];
}
}
while(i<a.size())
v[k++]=a[i++];
while(j<b.size())
v[k++]=b[j++];
return count;}
int mergesort(vector<int>&v){
    int c=0;int n=v.size();
    if(n==1)return 0;
    int n1=n/2,n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++)
    a[i]=v[i];
    for(int i=0;i<n2;i++)
    b[i]=v[i+n1];
c=c+mergesort(a);
   c=c+mergesort(b);

c=c+merge(a,b,v);
return c;
}
int main(){
    int arr[]={1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
cout<<mergesort(v);


}
