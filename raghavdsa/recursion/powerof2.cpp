#include<bits/stdc++.h>
using namespace std;
int power (int n){
    if(n==1)return 1;
if(n%2==0){
    return power(n/2);
}

else return 0;}
int main(){
    cout<<power(14);
}