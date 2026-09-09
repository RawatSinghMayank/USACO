#include<bits/stdc++.h>
using namespace std;

int length(char str[]){
if(str[0]=='\0')return 0;
int len=length(str+1);
return len+1;
}

void remove(char str[]){
if(length(str)==1)return;
if(str[0]==str[1]){
    int i;
    for(i=0;i<length(str)-1;i++){
        str[i]=str[i+1];
    }
    str[i]='\0';
    remove(str);
}
else{
    remove(str+1);
}
}
void removeAdjacentDuplicates(std::string &s, int index = 0) {
    // Base case: if the string is empty or has only one character, return
    if (index >= s.length() - 1) {
        return;
    }

    // Check if the current character is the same as the next character
    if (s[index] == s[index + 1]) {
        // Remove the current character by shifting the rest of the string left
        s.erase(index, 1);
        // Call the function recursively on the same index
        removeAdjacentDuplicates(s, index);
    } else {
        // Move to the next character
        removeAdjacentDuplicates(s, index + 1);
    }
}
std::string removeAdjacentDuplicates(const std::string &s) {
    // Base case: if the string is empty or has only one character, return it
    if (s.length() <= 1) {
        return s;
    }

    // Check if the first character is the same as the second character
    if (s[0] == s[1]) {
        // Skip the first character and call the function recursively on the rest of the string
        return removeAdjacentDuplicates(s.substr(1));
    } else {
        // Keep the first character and call the function recursively on the rest of the string
        return s[0] + removeAdjacentDuplicates(s.substr(1));
    }
}
int main()
{
string str;
 cin>>str;
    removeAdjacentDuplicates(str);
    cout<<str<<endl;
return 0;
}