// #include<bits/stdc++.h>
// using namespace std;
// int  fibo(int n){
// int a=0;
// int b=1;
// int c=a+b;
// if(n==0 || n==1)return n;
// for(int i=0;i<n-2;i++){
//     a=b;
//     b=c;
//     c=a+b;
// }
// return c;}

// int main(){
//     int n;
//     cin>>n;
// cout<<fibo(n);
// }
#include<bits/stdc++.h>
using namespace std;
int  fibo(int n){
if(n==0 || n==1)return n;
else {
    return fibo(n-1)+fibo(n-2);
}}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
cout<<fibo(i)<<" ,";
}
return 0;}
