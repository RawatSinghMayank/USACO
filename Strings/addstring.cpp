#include <bits/stdc++.h>
using namespace std;

/*Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"*/
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int n1 = num1.length();
        int n2 = num2.length();
        string ans = "";
        int sum = 0, carry = 0;
        int i = n1 - 1, j = n2 - 1;
        while (i >= 0 || j >= 0)
        {
            sum += carry;
            if (i >= 0)
            {
                sum += num1[i] - '0';
            }
            if (j >= 0)
            {
                sum += num2[j] - '0';
            }
            ans += sum % 10 + '0';
            carry = sum / 10;
            if (i >= 0)
                i--;
            if (j >= 0)
                j--;
            sum = 0;
        }
        if (carry)
            ans += 1 + '0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/*The issue in the first code snippet occurs because of how you are trying to convert an integer result to a string type. Specifically, in this line:

cpp
Copy code
string x = (sum % 10 + '0');
Here, sum % 10 + '0' converts the least significant digit of the sum to its corresponding ASCII character, which is correct. However, wrapping this inside string x = ... leads to an issue, because the result of sum % 10 + '0' is still a character, not a string. You cannot directly assign a character to a string without explicitly converting it.

To fix this, you should do something like:

cpp
Copy code
string x = string(1, sum % 10 + '0');
This ensures the result is treated as a string (with 1 character) rather than just a char.

In the second code snippet, you are appending the character directly to the string ans:

cpp
Copy code
ans += sum % 10 + '0';
This works because appending a character to a string is valid in C++.
You said:
what about ans=sum%10+'0'+ans;
ChatGPT said:
ChatGPT
In the expression:

cpp
Copy code
ans = sum % 10 + '0' + ans;
The problem arises from how C++ interprets the expression. Here’s the breakdown:

sum % 10 + '0' converts the least significant digit to its corresponding character (just like before).
However, when you write sum % 10 + '0' + ans, the addition operation (+) gets evaluated from left to right.
This means that the first part, sum % 10 + '0', evaluates to a char. Then, you are trying to add this char to a string (ans). But since the + operator has been evaluated from left to right, the result is interpreted incorrectly: it tries to add a char (an integer value) to a string, which isn't how string concatenation works.

Solution:
You should explicitly cast the character to a string and then concatenate it:

cpp
Copy code
ans = string(1, sum % 10 + '0') + ans;
This way, the character is converted to a string, and then the concatenation with ans works as expected.
*/

/*No need to reverse in this method */
class Solution
{
public:
    /*Thus, the overall time complexity is O(max(n1, n2))*/
    string addStrings(string num1, string num2)
    {
        int n1 = num1.length();
        int n2 = num2.length();
        string ans = "";
        int sum = 0, carry = 0;
        int i = n1 - 1, j = n2 - 1;
        while (i >= 0 || j >= 0)
        {   
            sum += carry;
            if (i >= 0)
            {
                sum += num1[i] - '0';
            }
            if (j >= 0)
            {
                sum += num2[j] - '0';
            }

            ans = to_string(sum % 10) + ans;
            carry = sum / 10;
            if (i >= 0)
                i--;
            if (j >= 0)
                j--;
            sum = 0;
        }
        if (carry)
            ans = to_string(1) + ans;
        return ans;
    }
};