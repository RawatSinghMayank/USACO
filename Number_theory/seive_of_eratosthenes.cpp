
    vector<int> sieveOfEratosthenes(int n)
    {
      vector <bool> sieve(n+1,true);
        sieve[0]=sieve[1]=false;
        for (int i=2; i*i<=n; i++){
            if (sieve[i]==true){
                for (int j=i*i ; j<=n; j=j+i){
                sieve[j]=false;
                }}
        }
       vector <int> result;
        for (int i=2; i<=n; i++){
            if (sieve[i]==true)
            result.push_back(i);
        }
    return result;}

T.C-O(n*log(logn))