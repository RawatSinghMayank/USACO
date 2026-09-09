class Solution {
public:
    bool isPalindrome(string s) {
      
      string newstring="";
      for (int i=0; i<s.length(); i++){
        if (isalnum(s[i])){
            newstring+=tolower(s[i]);
        }
      }
      string temp=newstring;
      for (int i = 0,j=newstring.length()-1; i < j; i++,j--){
        swap(newstring[i],newstring[j]);
      }
      
      return temp==newstring;
    }
};


// Let's break down the time complexity of the given function step by step:

// Code Breakdown and Analysis
// 1. Constructing a Cleaned String
// cpp
// Copy
// Edit
// string newstring = "";
// for (int i = 0; i < s.length(); i++) {
//     if (isalnum(s[i])) {
//         newstring += tolower(s[i]);
//     }
// }
// This loop iterates over all characters of the input string s.
// Inside the loop:
// isalnum() takes O(1) time.
// tolower() takes O(1) time.
// String concatenation newstring += tolower(s[i]) generally has O(1) average amortized complexity due to dynamic resizing.
// Time Complexity for this section: O(n) (where n is the length of the input string)

// 2. Creating a Reversed String Using Two-Pointer Approach
// cpp
// Copy
// Edit
// string temp = newstring;
// for (int i = 0, j = newstring.length() - 1; i < j; i++, j--) {
//     swap(newstring[i], newstring[j]);
// }
// The loop runs n/2 times, where n is the length of newstring.
// swap() takes O(1) time.
// Time Complexity for this section: O(n)

// 3. Checking Palindrome
// cpp
// Copy
// Edit
// return temp == newstring;
// Comparing two strings of length n takes O(n) time.

// In C++, this creates a deep copy of the newstring.
// The entire contents of newstring are copied into temp.
// This operation has O(n) time complexity where n is the length of newstring.


// Overall Time Complexity
// O(n) + O(n) + O(n)+O(n) = O(n)

// Space Complexity
// O(n) for newstring
// O(n) for temp Thus, the space complexity is O(n).
// Final Complexity:
// Time Complexity: O(n)
// Space Complexity: O(n)





class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0 , j = s.length()-1;
        while (i < j){
            if (!isalnum(s[i])) i++;
           else  if (!isalnum(s[j])) j--;
            else if (tolower(s[i]) == tolower(s[j])) i++, j--;
            else return false;
        }
        return true;
    }
}; O(N)