#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    std::cout<<"enter the value of n:last term"<<std::endl;
    int n;
    std::cin>>n;
    long double sum=0.0;
    for(int i=1;i<=n;i++){
    sum=sum + std::pow((1/i),i);}
std::cout<<"the sum calculated is:"<<std::setprecision(6)<<sum;
return 0;}
