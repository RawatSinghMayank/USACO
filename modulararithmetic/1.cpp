solved cses coin combinations I problem and realized that even modulo operation
can give us tle.

Adding two number of length L is O(L).

Factorial of n is approx O(N * L) where L is time to multiply two numbers.


int a = 1 , b = 8;
a - b = -7;
int answer = ((a - b) % mod + mod) % mod;