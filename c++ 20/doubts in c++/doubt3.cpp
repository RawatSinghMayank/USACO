#include <iostream>
int main(){
    int a=3;
    int b=20;
    bool c;
    c=(a=b);
    std::cout<<c<<std::endl;
    std::cout<<((a=b)&&(a<b));}