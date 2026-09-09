#include <iostream>
int main(){
    int n;
    std::cout<<"enter no of rows"<<std::endl;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            std::cout<<" "<<" ";
        }
        for(int k=1;k<=n;k++){
            std::cout<<"*"<<" ";}
            std::cout<<std::endl;}return 0;}