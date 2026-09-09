#include <iostream>
int main(){
    int a,n;
    
    std::cin>>n;
     a=n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=a;j++){
            std::cout<<"*";
        }a--;
        std::cout<<std::endl;
    }return 0;}