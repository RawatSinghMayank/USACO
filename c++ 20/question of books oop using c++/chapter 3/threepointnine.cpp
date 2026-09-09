#include <iostream>
#include <cmath>
int main(){
    std::cout<<"Enter the value of n"<<std::endl;
    int  n;
    std::cin>>n;

    std::cout<<"Enter the values of x1,x2,x3.........xn"<<std::endl;
    double x[n];
    for(int i=1;i<=n;i++){
        std::cin>>x[i];}
    long double variance=0;
    long double stdvar=0;
    long double x_=0;
    
    for(int i=1;i<=n;i++){
        x_=x_ + ((1/n)(x[i]));
    }
    for(int i=1;i<=n;i++){
variance=variance+((1/n) (std::pow((x[i]-x_),2)));
stdvar=stdvar+std::sqrt(variance);}
return 0;}