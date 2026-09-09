// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

// A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
// Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

#include <iostream>
#include <cmath>

using namespace std;

int evenlyDivides(int n) {
        
        int num=n;
        int count=0;
        while (n>0){
            int last_digit = n%10;
            if (last_digit !=0 and num%last_digit==0){
                count++;
            }
            n=n/10;
        }
        return count;
}

int count_digits(int n){
    int count = ceil(log10(n));   // shcorcut to count number of digits in a number
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<evenlyDivides(n)<<endl;
    cout<<count_digits(n)<<endl;

return 0;
}
/* */