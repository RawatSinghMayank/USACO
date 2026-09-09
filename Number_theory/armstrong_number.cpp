You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised 
to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 
3^3 + 7^3 + 1^3 = 371.


bool checkArmstrong(int n){
	int temp=n;
	int digits=0;
	while (n!=0){
		digits++;
		n=n/10;
	}
	int sum=0;
	n=temp;
	while (n!=0){
		sum+= pow(n%10,digits);
		n=n/10;
	}
	return sum==temp;
}
T.C O(2*log10(n))



bool checkArmstrong(int n){
	int digits=to_string(n).length();
	int temp=n;
	int sum=0;
	while (n!=0){
		sum+= pow(n%10,digits);
		n=n/10;
	}
	return sum==temp;
}
Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined 
by the number of digits in the input integer N. In the worst case when N is a multiple of 10 
the number of digits in N is log10 N + 1.

