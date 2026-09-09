class Solution {
public:
    int reverse(int x) {
        if (x > -10 && x < 10) return x;  
        long long rev_num=0;
        while (x!=0){
            rev_num=rev_num*10+x%10;
            x=x/10;
        }
        if (rev_num < INT_MIN || rev_num > INT_MAX)return 0;
        return rev_num;
    }
};

check INT_MAX AND INT_MIN value u will know why i have used -9 and 8 and 9
T.C O(log 10(x))
class Solution {
public:
    int reverse(int x) {
      if (x > -10 && x < 10) return x;  
      int rev_num=0;
      while (x!=0){
        int last_digit = x%10;
        x = x/10;
        if (rev_num < INT_MIN/10 || (rev_num == INT_MIN/10  && last_digit == -9)){
            return 0;
        }
        else if (rev_num >INT_MAX/10 || (rev_num == INT_MAX/10 && (last_digit ==8 || last_digit == 9) )){
            return 0;
        }
        rev_num = rev_num*10 + last_digit;
      }  
    
    return rev_num;}
};


class Solution {
public:
    int reverse(int x) {
        if (x > -10 && x < 10) return x;  
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};