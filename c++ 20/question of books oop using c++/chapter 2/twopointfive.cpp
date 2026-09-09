#include <iostream>
int main(){
    double f;
    double c=0;
    std::cout<<"enter temp in fahrenheit"<<std::endl;
    std::cin>>f;
    c=((f-32)*5)/9;
    std::cout<<c;
    return 0;}