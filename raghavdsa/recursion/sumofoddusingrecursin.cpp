#include<bits/stdc++.h>
using namespace std;
int sum1(int a,int b){
    if(a>b)return 0;
if(a%2==0)return sum1(a+1,b);
else return a+sum1(a+2,b);
}





int main(){
    int a,b;
    cin>>a>>b;
    
    cout<<sum1(a,b);
}