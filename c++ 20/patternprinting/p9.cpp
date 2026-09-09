#include <iostream>
int main(){
    int a,n;
    std::cin>>n;
    a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<a; // or std::cout<<a<<" ";  
            std::cout<<" ";
       a++; }std::cout<<std::endl;
    } return 0;
}