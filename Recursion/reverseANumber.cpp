#include<bits/stdc++.h>
using namespace std;
// Method 1:
int reverse(int n){
    if(n==0)return 0;
    static int rev=0;
    rev=rev*10+n%10;
    reverse(n/10);
    return rev;
    
}

// Method 2
int nofDigits(int n){
    if(n==0)return 0;
    return nofDigits(n/10)+1;
}
int rev2(int n){
if(n==0)return 0;
return (n%10)*pow(10,nofDigits(n)-1)+rev2(n/10);
}


// 3rd method
int reverseNumber(int num, int rev = 0) {
    // Base case: if the number becomes 0, return the reversed number
    if (num == 0) {
        return rev;
    } else {
        // Extract the last digit and add it to the reversed number
        rev = rev * 10 + num % 10;
        // Recursive call with the remaining number
        return reverseNumber(num / 10, rev);
    }
}


int main()
{
    int n;
    cin>>n;
    cout<<rev2(n);
    
return 0;
}