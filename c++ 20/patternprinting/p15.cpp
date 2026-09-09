#include <iostream>
int main(){
    
    int z=1;
    int n;
    std::cin>>n;
    
    int a=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            std::cout<<" ";
        }a--;
        for(int x=1;x<=z;x++){
        std::cout<<"*";
        }
        z=z+2;
        std::cout<<std::endl;
    }return 0;}