#include<bits/stdc++.h>
int x=0;
using namespace std;
int ans(int n){
if(n>0){
    x++;
    return ans(n-1)+x;
}
return 0;}
int main(){
    int n=5;
    cout<<ans(5);
    return 0;}