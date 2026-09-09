const int MAXN = 1000000; // adjust as needed

vector<bool> isPrime(MAXN + 1, true);
vector<int> prefix(MAXN + 1, 0);

void precompute() {
    isPrime[0] = isPrime[1] = false;

    // Sieve
    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Prefix array
    for (int i = 1; i <= MAXN; i++) {
        prefix[i] = prefix[i - 1] + (isPrime[i] ? 1 : 0);
    }
}

// Query
int countPrimes(int L, int R) {
    return prefix[R] - prefix[L - 1];
}