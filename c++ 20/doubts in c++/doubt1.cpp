#include <iostream>
#include <string.h>

int main()
{
    int a;
    std::cout << "enter the value of the number" << std::endl;
    std::cin >> a;
  
 
    std::cout << "enter  your name" << std::endl;
    std::string name;
 
    std::getline(std::cin, name);

    std::cout << "number:" << a << std::endl;
    std::cout << "name:" << name; 
}