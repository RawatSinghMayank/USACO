#include<bits/stdc++.h>
#include<vector>
using namespace std;


//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          
//            int n=arr.size();
//         vector<int>v;
//   if(x<arr[0]){
//       for(int i=0;i<k;i++){
//           v.push_back(arr[i]);
//       }
//       return v;
//   } if(x>arr[n-1]){int a=n-1;
//       for(int i=0;i<k;i++)
//   {v.push_back(arr[a--]);
//   }sort(v.begin(),v.end());
//   return v;
//     }

// int a=0;
// int low=0;
// int high=n-1;
// int i=1,j=1;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]==x){  v.push_back(arr[mid]);
// while(a<k-1){
//     int x=abs(arr[mid-i]-arr[mid]);

//    int y=abs(arr[mid+j]-arr[mid]);
//     if(x>y){
//         v.push_back(arr[mid+j]);
//         j++;
//     }
//     else { v.push_back(arr[mid-i]);i++;}
  
//     a++;
// }

// sort(v.begin(),v.end());return v;}
//     else if(arr[mid]<x){
//         low=mid+1;
//     }else high=mid-1;
// }vector<int>z;
// int i1=0;int j1=0;
// for(int i=0;i<k;i++){
//     if((high-j1)<0){
//         z.push_back(arr[low+i1]);
//         i1++;
//     }
//     else if((low+i1)>n-1){
//         z.push_back(arr[high-j1]);
//         j1++;
//     }
//     else {
// int x2=abs(x-arr[low+i1]);
// int y2=abs(x-arr[high-j1]);
// if(x2<y2){z.push_back(arr[low+i1]);
// i1++;}

// else {z.push_back(arr[high-j1]);j1++;}}
// sort(z.begin(),z.end());}
//  return z; } 

bool check(vector<int>& piles,int mid, int h){
int c=0;
int n=piles.size();

for(int i=0;i<n;i++){
    if(piles[i]<=mid){
        c++;
    }else {
while(piles[i]!=0){
    if(piles[i]<mid){
        c++;
        break;
    }else {
piles[i]=piles[i]-mid;
c++;}
}


    }
}

  if(c<=h)return true;
  else return false;
      }
    int minEatingSpeed(vector<int>& piles, int h) {
        int min=INT_MAX;
        int max=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]>max){
                max=piles[i];
            }
            if(piles[i]<min){
                min=piles[i];
            }
        }
int low=min;
int high=max;
int ans=-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(check(piles,mid,h)){
ans=mid;
high=mid-1;}
else { low=mid+1;}
}
return ans;


    }
  
    int main(){
        vector<int>v;
v.push_back(3);
v.push_back(6);v.push_back(7);v.push_back(11);
int h=8;
cout<<minEatingSpeed(v, h);
    }