1390. Four Divisors

Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.
 
Example 1:

Input: nums = [21,4,7]
Output: 32
Explanation: 
21 has 4 divisors: 1, 3, 7, 21
4 has 3 divisors: 1, 2, 4
7 has 2 divisors: 1, 7
The answer is the sum of divisors of 21 only.
Example 2:

Input: nums = [21,21]
Output: 64
Example 3:

Input: nums = [1,2,3,4,5]
Output: 0

class Solution {
public:
    void count_divisor(int &sum,int &count,int num){
        for (int i=1 ;i*i<=num; i++){
            if (num%i==0){
                count+=1;
                sum+=i;
                if ((num/i)!=i){
                    sum+=num/i;
                    count+=1;
                }
            }
        }
    }
    int sumFourDivisors(vector<int>& nums){
       int final_ans=0;
        for ( auto&it:nums){
            int sum=0;
            int count=0;
            count_divisor(sum,count,it);
            if ( count==4){
                final_ans+=sum;
            } }
        
return final_ans;}
};




class Solution {
public:
    void count_divisor(int &sum,int &count,int num){

        for (int i=2 ;i*i<=num; i++){
            if (num%i==0){
                sum+=i;
                count+=1;
            if ((num/i)!=i){
                sum+=(num/i);
                count+=1;
            }
            }
        }
    }
    int sumFourDivisors(vector<int>& nums){
       int final_ans=0;
        for ( auto&it:nums){
            int sum=0;
            int count=0;
            count_divisor(sum,count,it);
            if (count==2){
                final_ans+=sum+1+it;
            } }
        
return final_ans;}
};




       class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int sum=0;
        for (auto&n : nums){
            int divisor=0;
            for (int i=2; i*i<=n ;i++){
                if (n%i == 0){
                    if (divisor==0){
                        divisor=i;
                    }
                    else{
                        divisor=0;
                        break;
                    }
                }
            }
            if (divisor!=0 and (n/divisor)!=divisor){
                sum+=n+divisor+1+(n/divisor);
            }
        }   
    return sum;}
};