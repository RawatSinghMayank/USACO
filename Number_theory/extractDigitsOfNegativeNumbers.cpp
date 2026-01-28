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

 while (num != 0){
    cout  << num % 10 << " ";a
    num = num / 10;
}
 return 0;
}