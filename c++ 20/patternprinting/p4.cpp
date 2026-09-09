#include <iostream>
int main(){
    int d=65;
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
    
        for(char c=65;c<=d;c++){
            std::cout<<c;
        }
        d++;
        std::cout<<std::endl;
    }
    return 0;}