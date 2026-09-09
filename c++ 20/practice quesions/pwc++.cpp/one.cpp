// finding no of digits in a number
#include <iostream>
int sum(int n);
int main(){
    int n;
    std::cin>>n;
    int c=0;
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        c++;
        n=n/10;

    }
    std::cout<<c<<std::endl;
  std::cout<<sum;}