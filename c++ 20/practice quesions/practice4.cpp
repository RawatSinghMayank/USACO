	#include <iostream>
	
	   void  seriesSum(int n);
	    
	    void seriesSum(int n) {
	  
	  long long sum=(n*(n+1))/2;
	std::cout<<sum;
	}
	int main(){
	    int n;
	    std::cin>>n;
	seriesSum(n);
	    
	}