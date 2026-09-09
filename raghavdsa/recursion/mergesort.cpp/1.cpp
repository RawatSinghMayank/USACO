#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int n1=a.size();
       int n2=b.size();
          int n3=c.size();
          int i=0;
          int j=0;
          int k=0;
          while(i<n1 && j<n2){
            if(a[i]<=b[j])c[k++]=a[i++];
            else c[k++]=b[j++];
          }
          while(i<n1)
          c[k++]=a[i++];
          while(j<n2)
          c[k++]=b[j++];
}
void mergesort(vector<int>&v){
int n=v.size();
if(n==1)
return; 
int n1=n/2;
int n2=n-n1;
vector<int>v1(n1),v2(n2);
for(int i=0;i<n1;i++)
v1[i]=v[i];
for(int i=0;i<n2;i++)
v2[i]=v[i+n1];
mergesort(v1);
mergesort(v2);
merge(v1,v2,v);}


int main(){
int arr[]={-3,53,66,3,0,4,-90};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
mergesort(v);
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
return 0;


}



int main(){
int arr[]={-3,53,66,3,0,4,-90};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
msort(v);
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
return 0;


}