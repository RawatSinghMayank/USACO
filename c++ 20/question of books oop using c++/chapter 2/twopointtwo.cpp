#include <iostream>
int main(){
    int a,b;
    std::cout<<"enter two numbers"<<std::endl;
    std::cin>>a>>b;
    int max=0;
    if(a<b){
        max=b;}
        else{max=a;}
        std::cout<<"larger number is:"<<max;
        return 0;}