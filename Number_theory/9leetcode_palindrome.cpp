
    bool isPalindrome(int x) {
       //this is only applied when you don't count negative numbers in palindrome . But actually -121 is palindrome if you count negative numbers in palindrome list.
        if (x < 0) {
        return false;
       }

       int n = x; 
       long long rev = 0;
       while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
       }    
       return (n == rev);
    }
};
    }

class Solution {
public:
    bool isPalindrome(int x) {
        string ans=to_string(x);
        int i=0;
        int j=ans.length()-1;
        for(i,j;i<j;i++,j--){
            if(ans[i]!=ans[j]){
                return false;
            }
        }
  return true;
    }
};