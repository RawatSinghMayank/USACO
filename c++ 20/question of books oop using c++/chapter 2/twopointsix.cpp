#include <iostream>

int temp();

int temp()
{
    std::cout << "enter temp in fahrenheit" << std::endl;
    double f;
    std::cin>>f;
    double c = 0;
    c = ((f - 32) * 5) / 9;
std::cout<<"temp in degree celsius is "<<c;
return 0;
}
int main()
{ 
   temp();
    return 0;
}