#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using std::string;
using std::cin;
using std::endl;
using std::cout;
using std::vector;

int main(){
 
 int num;
 cin >> num;

 cout << static_cast <int> (log10(num)) + 1;
 return 0;
}