https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

O(n * sqrt(n)), where n is the given integer.

We are iterating via i from 1 to n, and for each value of iwe are iterating from 1 to sqrt(i).

Hence, the time complexity is O(n * sqrt(n)).

int find_divisors_sum(int num){
        
    int sum=0;
    for (int i=1; i*i<=num; i++){
        if (num % i==0){
            sum+=i;
            if( (num/i)!=i){
                sum+=(num/i);
            }
        }
    }
    return sum;
}
    int sumOfDivisors(int n) {
      int sum=0;
      for (int i=1; i<=n; i++){
          sum+=find_divisors_sum(i);
    }
    return sum;}





2nd approach
Let’s take ‘n’  = ‘5’. Values of ‘sumOfDivisors(i)’ for each ‘i’ from 1 to 5 is as follows:

sumOfDivisors(1) = 1.
sumOfDivisors(2) = 2 + 1.
sumOfDivisors(3) = 3 + 1.
sumOfDivisors(4) = 4 + 2 +1.
sumOfDivisors(5) = 5 + 1.
Let’s count the number of occurrences of each ‘i’ from 1 to ‘n’ in the above expressions.

1 occurs 5 times.
2 occurs 2 times.
3 occurs 1 time.
4 occurs 1 time.
5 occurs 1 time.
From this we can observe that an integer ‘i’ is added to the final answer 5/i times (where ‘/’ is floor integer division). Therefore our final answer for given ‘n’ would be ∑ i * (n/i) for all ‘i’ from 1 to ‘n’.

The steps are as follows:

function sumOfAllDivisors(int ‘n’)

Initialize ‘ans’ = 0
For ‘i’ from 1 to ‘n’:
‘ans’ += i * (n / i)
Return ‘ans’
Time Complexity
O(n), where ‘n’ is the given integer.

We are iterating via ‘i’ from 1 to ‘n’. 

Hence, the time complexity is O(n).

Space Complexity
O(1).

We are not using any extra space.

Hence, the space complexity is O(1).
int sumOfAllDivisors(int n){
	int  sum=0;
    for (int i=1; i<=n; i++){
        sum+=(n/i)*i;
    }	
    return sum;
}




3rd approach
