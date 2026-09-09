#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
#include<queue>
using namespace std;

// In C++, a lambda expression is essentially an anonymous, inline function.
//  The capture clause tells the compiler which variables from the surrounding 
//  scope (outside the lambda) are allowed to be used inside the lambda's body,
//   and how they should be accessed.


// Standard functions in C++ can only access their own parameters and global variables. 
// Lambdas, however, can "capture" local variables from the function they are defined in. 
// The capture clause controls this behaviour
// [ ](int a,int b) (Empty Capture Clause): Because the brackets are empty,
//  this specific lambda captures nothing.
//  It does not need to know about any variables outside of its 
//  own parameters. It purely takes a and b, compares them, and 
//  returns the result. This is the most common use case when 
//  writing simple comparators for sorting algorithms.



// *[&] (Capture by Reference):** Captures all used variables from the 
//surrounding scope by **reference**. This means you can read and modify the original variables.
//     ``
//     int sum = 0;
//     auto addToSum = [&](int a) { sum += a; }; // sum is modified directly
    
    

void check() {
     
     int sum = 0, a = 10, b = 10;
     int c = 20;
     
     auto manipulate = [&]() {
         sum += a + b;
     };   
     manipulate();
     cout << sum << " " << a << " " << b << " " << c << " " << endl;
     
     auto m = [&](int a, int b) {
          sum += a + b;   
     };
     m(a,b);
     
     cout << sum << " " << a << " " << b << " " << c << " " << endl;
     
     
 //     x (Capture by Value): The lambda makes a copy of x. However, by 
 // default in C++, all variables captured by value are treated as const
 //  (read-only) inside the lambda body. The compiler prevents you from modifying them.
     
     int x = 10, y = 10;
     cout << x << " "  << y << endl;
     auto m1 = [x, &y]() {
         //x += 10; //error
         y += 10;
     };
     m1();
     cout << x << " "  << y << endl;
}

int main() {
    
    vector<int> nums = {5,5,2,5,6,2,1,6};
    
    sort(nums.begin(),nums.end(), [](int a, int b) {
        return a > b;
    });
        
    for (int ele : nums) cout << ele << " ";
        cout << endl;
    check();
    
    auto comparator = [](int a, int b) {
        
        return a > b;
     };
     
     sort(nums.begin(),nums.end(),comparator);
     for (int ele : nums) cout << ele << " ";
        cout << endl;
    return 0;
}
