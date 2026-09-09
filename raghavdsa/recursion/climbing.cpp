#include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    else return count(n-1)+count(n-2)+count(n-3);
}
int main(){
cout<<count(3 );
}
