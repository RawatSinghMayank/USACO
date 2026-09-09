#include <bits/stdc++.h>
using namespace std;


int main(){

	string a = "string";

	a[0] = 'n'; //this is correct
	// error : str[0] mai string thodi daal skte hai a[0] = "g";


	int n;
	cin >> n;
	cin.ignore();

// 	int n;
// cin >> n;          // reads the number, but leaves '\n' in buffer
// string s;
// getline(cin, s);  
// this error will not happen when you simply read a string like cin >> str but happend when getline(cin,s) // reads the leftover '\n' as an empty line!


	string mayank = "mayank";
	mayank.push_back('a'); //T.c- O(1)
	cout << mayank;

	mayank = mayank + 'a';
	//time complexity - O(n) n = size of string
	
	string sentence;
	getline(cin,sentence);
	cout << sentence << "\n";

	stringstream parts(sentence);

	string temp;

	int count = 0;
	while(parts >> temp){
		cout << temp << " " << ++count<< " ";
	}

	return 0;
}

// Reading a line after cin >>

// Problem:
// - cin >> variable leaves the newline ('\n') in the input buffer.
// - getline() reads until the first newline.
// - Therefore, getline() immediately reads an empty string.

// Solution:
// cin.ignore();

// Example:

// cin >> n;
// cin.ignore();
// getline(cin, str);

// ----------------------------------------------------

// stringstream

// - Converts a string into an input stream.
// - Behaves like cin.
// - Useful for splitting a string into words.

// Syntax:

// string str = "hello world cpp";
// stringstream ss(str);

// string word;

// while (ss >> word) {
//     cout << word << endl;
// }

// Output:
// hello
// world
// cpp

// ----------------------------------------------------

// Flow:

// Input
// ↓
// getline()
// ↓
// string
// ↓
// stringstream
// ↓
// >> extracts one word at a time
// ↓
// Loop until stream ends