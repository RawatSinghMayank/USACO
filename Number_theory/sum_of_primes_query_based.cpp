//  https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/sum-of-primes-7/
//Brute Force
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int num){

	if (num <= 1)  return false;

	for (int i=2; i*i<=num; i++){
		if (num % i == 0){
			return false;
		}
	}

return true;
}

int main(){

	int N;
	cin>>N;

	while(N--){
		int l , r;
		cin>>l>>r;
		long long sum=0;
		for (int i=l ;i<=r; i++){
			if (check_prime(i)){
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
return 0;
}




//Little bit optimized 
#include <bits/stdc++.h>
using namespace std;
 
vector <bool> sieve (){
 
	int n=1000000;
	vector <bool> prime(n+1,true);
 
	prime[0]=prime[1]=false;
	for (int i=2; i*i<=n; i++){
		if (prime[i]==true){
			for (int j=i*i; j<=n; j+=i){
				prime[j]=false;
			}
		}
	}
 
return prime;
}
 
int main(){
 
	vector <bool> prime=sieve();
	int N;
	cin>>N;
 
	while(N--){
		int l , r;
		cin>>l>>r;
		long long sum=0;
		for (int i=l ;i<=r; i++){
			if (prime[i]==true){
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
return 0;
}

// Best method optimized --  can see solution from striver maths playlist
#include <bits/stdc++.h>
using namespace std;

vector <bool> sieve (){

	int n=1000000;
	vector <bool> prime(n+1,true);

	prime[0]=prime[1]=false;
	for (int i=2; i*i<=n; i++){
		if (prime[i]==true){
			for (int j=i*i; j<=n; j+=i){
				prime[j]=false;
			}
		}
	}

return prime;
}

int main(){

	vector <bool> prime=sieve();
	vector <long long> prefix_sum(prime.size(),0);

	for (int i=1 ;i< prefix_sum.size(); i++){
		prefix_sum[i]+=prefix_sum[i-1];
		if (prime[i]== i) prefix_sum[i]+=i;
	}
	
	int N;
	cin>>N;

	while(N--){
		int l , r;
		cin>>l>>r;
		cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
	}
return 0;
}