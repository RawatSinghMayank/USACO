#include<bits/stdc++.h>
using namespace std;
bool binary(vector<int>v,int x){
int n=v.size();
int l=0;
int h=n-1;
while(l<=h){
  int mid=l+(h-l)/2;
    if(v[mid]==x){
        return true;}
        else if(v[mid]>x){
            l=mid+1;}
            else h=mid-1;}
            return false;


}
int main(){
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
  
        int x;
        cin>>x;
v.push_back(x);
    }
    cout<<"enter x"<<endl;
    int x;
    cin>>x;
    int z=binary(v,x);
    if(z==1){
        cout<<"element present"<<endl;
        }
        else cout<<"element is not present "<<endl;    return 0;
}