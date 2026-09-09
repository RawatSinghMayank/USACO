#include <bits/stdc++.h>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a=0;
for(int i=m;i<nums1.size();i++){
    nums1[i]=nums1[a++];
}
for(int i=0;i<m;i++){
    nums1[i]=0;}
int i=m,j=0,k=0;
while(i<nums1.size() && j<n){
    if(nums1[i]<nums2[j]){
        nums1[k++]=nums1[i++];
    }
    else { nums1[k++]=nums2[j++];

    }}
    for(i;i<nums1.size();i++){
        nums1[k++]=nums1[i];}

        for(j;j<n;j++){
            nums1[k++]=nums2[j];}    
    }
int main(){ 
vector<int>nums1;
vector<int>nums2;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    nums1.push_back(x);
}
int n1;
cin>>n1;
for(int i=0;i<n1;i++){
    int x1;
    cin>>x1;
    nums2.push_back(x1);
}
 merge(nums1,n-n1,nums2,n1);
 for(int i=0;i<nums1.size();i++){
    cout<<nums1[i]<<" ";
 }
return 0;

}