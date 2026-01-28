#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin>>x>>y;

	
 long long  temp1 = x, temp2 = y;
	long long  i = 2 , j=2;
	while (temp1 != temp2){
		if (temp1 < temp2){
			temp1 = x *i;
			i++;
		}
		else{
			temp2 = y *j;
			j++;
		}
		
	}
	cout<<temp1;

return 0;
}

GCD(a,b) * LCM(a,b) = a * b


 int find_gcd (int a, int b){
      
      while (a > 0 and b > 0){
          if (a > b) a = a % b;
          else b = b % a;
          
      }
      if (a == 0 )return b;
      return a;
    }
    vector<int> lcmAndGcd(int a, int b) {
      int gcd = find_gcd(a,b);
      int lcm = a*b/gcd;
      return {lcm,gcd};
      
    }