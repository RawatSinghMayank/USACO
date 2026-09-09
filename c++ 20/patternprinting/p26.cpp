#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int min;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n){
                a=2*n-i;
            }else { a=i;}
            if(b>n){
                b=2*n-j;
            }else { b=j;}
            if(a>b){
                min=b;}
                else{ min=a;}
                std::cout<<n+1-min;
                }std::cout<<std::endl;}return 0;}