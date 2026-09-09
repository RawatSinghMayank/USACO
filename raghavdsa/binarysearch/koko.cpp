#include<bits/stdc++.h>
using namespace std;
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
          v.push_back(6);
          v.push_back(7);
  v.push_back(11);
  int h=8;
  int ans=minEatingSpeed(v,  h);
  cout<<ans;
    }