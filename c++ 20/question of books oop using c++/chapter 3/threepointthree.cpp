#include <iostream>
int main(){
    std::cout<<"enter the value till which pattern should be printed"<<std::endl;
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<i;
        }
        std::cout<<std::endl;}
        return 0;}