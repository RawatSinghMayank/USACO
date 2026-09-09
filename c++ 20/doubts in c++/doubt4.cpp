#include <iostream>
int main(){
 char c[]={"mayank"};
  char d[6];
 for(int i=0;i<std::size(c);i++){
   
    d[i]=std::toupper(c[i]); 
 }
 std::cout<<c<<std::endl<<d;
}