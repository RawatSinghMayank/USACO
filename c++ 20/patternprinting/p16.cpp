#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int a=n-1;
    int z=0;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=a;j++){
            std::cout<<" ";
        }
        a--;
        for(char x=65;x<=z+65;x++){
            std::cout<<x;
        }
        z=z+2;
        std::cout<<std::endl;
    }return 0 ;}