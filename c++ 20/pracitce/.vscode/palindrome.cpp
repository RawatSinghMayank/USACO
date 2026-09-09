#include <iostream>
#include <string>
int main(){
std::cout<<"enter the numbere"<<std::endl;
int n;
int n1=0;
int sum=0;
int n2=10000;
std::cin>>n;
std::string str;
while(n>0){
   
    n1=n%10; 
    n=n/10;
    sum=sum+n1;
}
std::cout<<"the value of reversed number is:"<<sum<<std::endl;
return 0; }