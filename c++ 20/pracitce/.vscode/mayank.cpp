#include <iostream>
int fib(int a);
int fac(int b);
int main(){

std::cout<<"enter the number"<<std::endl;
int n;
std::cin>>n;
std::cout<<"factorial  of "<<n<<"is"<<fac(n)<<std::endl;
std::cout<<n <<"term of fibonacci is"<<fib(n)<<std::endl;
   return 0;}

   int fib(int a){
      if(a==0){ return 0;} 
      else if (a==1 || a==2){
         return 1;}
         else {
            return (fib(a-1) +fib(a-1));
         }
   }
   int fac(int b){
      if(b==0 || b==1){
         return 1;}
         else {return (fac(b) * fac(b-1));}
   }