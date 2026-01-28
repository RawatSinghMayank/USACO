class Solution {
public:
    void prime_factors (set <int> &primes, int n){

        for (int i = 2;  i*i <= n; i++){
            if (n % i == 0){
                primes.insert(i);
            
                while (n % i == 0) {
                    n = n / i;
                }
            }
        }
        if (n > 1 ){
            primes.insert(n);
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        
        set <int> primes;
        for (auto &it : nums){
            prime_factors (primes,it);
        }
    return primes.size();
    }
};