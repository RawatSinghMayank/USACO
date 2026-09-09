#include <iostream>
int main(){
int n;
std::cin>>n;
    int x=0;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            std::cout<<" ";;}
            for(char c=65;c<=65+x;c++){
               std:: cout<<c;}
                x++;
                std::cout<<std::endl;
    }return 0;}