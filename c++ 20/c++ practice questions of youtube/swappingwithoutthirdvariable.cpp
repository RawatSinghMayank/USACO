#include <iostream>
// Swapping without the use of third variable
int main(){
    std::cout<<"Enter the two numbers"<<std::endl;
    
    int a,b;
    std::cin>>a>>b;
    std::cout<<"Before swapping the no are"<<a<<" "<<b<<std::endl;
a=a+b;
b=a-b;
a=a-b;
std::cout<<"After swapping the numbers are:"<<a<<" "<<b;
return 0;}