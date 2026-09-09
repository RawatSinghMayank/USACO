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
    
    int count = 0;
        while (num != 0) {
            count++;
            num /= 10;
        }
        cout <<  count << endl;
        we can say that number of times it get divisible by 10 that is the count of digits in a number
        t.c of both = log10(n)

        if it was divisble by 2 then time complexity will be log2(n) 
        here divisble by 10 then time complexity is log10(n)
 cout << ceil(log10(num)); 
 return 0;
}