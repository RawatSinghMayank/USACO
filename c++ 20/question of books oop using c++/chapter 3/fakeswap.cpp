#include <iostream>
int reference(int a,int b);
int reference(int a,int b){
int temp=a;
a=b;
b=temp;
return 0;

}
int main(){
    std::cout<<"Enter the two numbers"<<std::endl;
    int a,b;
    std::cin>>a>>b;
    std::cout<<"after swapping number "<<a<<" and "<<b<<" is: "<<std::endl;
      reference(a,b);
    std::cout<<a<<std::endl<<b;
    return 0;}
