#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;
using std::vector;

int main(){
 
 string str;
 cin >> str;
 
 char ch;
 cin >> ch;
 
 if (str.find(ch) != string::npos){
	cout << "Found successfully" << endl;
 }
 else{
	cout << " not found"<<endl;
}

 return 0;
}
// std::string::npos

// - A special constant representing "not found".
// - Defined as:
//     static const size_t npos = -1;
// - It is the largest possible value of size_t.
// - string::find() returns:
//     • Index of the first occurrence if found.
//     • string::npos if the element is not found.
