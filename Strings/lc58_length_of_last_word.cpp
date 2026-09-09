Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.


class Solution {
public:
    int lengthOfLastWord(string s) {
    
    int length=0;
    bool counting=false;
    for (int i=s.length()-1; i >= 0; i--){
        if (s[i] != ' '){
            counting=true;
            length++;
        }
        else if (counting){
            break;
        }
    }

return length;}
};





class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;

        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        return end - start;        
    }
};