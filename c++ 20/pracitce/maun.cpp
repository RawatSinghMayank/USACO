#include  <iostream>
 #include <string>
 std::string add(std::string  a,std::string b);
 int main(){
  std::string a="mayank ";
  std::string b="singh ";
add( a, b);
return 0;}

  std::string add(std::string a,std::string b){
    std::string add;
    add=a+b;
   std::cout<<add;
    return add;
  }