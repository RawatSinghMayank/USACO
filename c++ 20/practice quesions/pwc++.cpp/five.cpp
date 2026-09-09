#include <iostream>
int main(){
 int a,b;
 int result=1;
 std::cout<<"enter a and b "<<std::endl;
 std::cin>>a>>b;
 // find a raise to power  b
 for(int i=1;i<=a;i++){
    result*=b;
 }
 std::cout<<result;
        return 0;}