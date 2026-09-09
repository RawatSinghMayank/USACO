#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n ;
	cin >> n;	
	vector <int> arr(n);
	for (int i = 0; i < n;i++){
		cin >> arr[i];
	}
	
	for (auto & it : arr){
		cout << it << " ";
	}
	
	int new_size;
	cin >> new_size;
	arr.resize(new_size,100);
	
	for (auto & it : arr){
		cout << it << " ";
	}


return 0;
}