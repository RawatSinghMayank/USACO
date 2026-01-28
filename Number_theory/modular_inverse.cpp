Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’
 under modulo ‘m’. if it does not exist then return -1.

 

Example 1:

Input:
a = 3
m = 11
Output: 4


 vector <int> extended_euclid(int a,int b){
        if (b == 0){
         vector <int> temp;
         temp.push_back(a);
         temp.push_back(1);
         temp.push_back(0);
         return temp;
        }
        vector <int> result = extended_euclid(b,a%b);
        vector <int> final_ans;
        final_ans.push_back(result[0]);
        final_ans.push_back(result[2]);
        final_ans.push_back(result[1]-(a/b)*result[2]);
        return final_ans;
    }
    
    int modInverse(int a, int m)
    {
        if (m==1)return -1;// For the input (a = 2) and (m = 1), the GCD is 1, but the modular 
// inverse of 2 modulo 1 does not make sense because any number modulo 1 is 0.
        vector <int> gcd=extended_euclid(a,m);
        if (gcd[0] != 1)return -1;
        int x=gcd[1];
        x=(x%m+m)%m; // x can be negative so we added m to make it positive
        return x;
    }


