#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str){
    string newstring="";
    newstring=str[0];
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i-1])
     newstring+=str[i];
    }
    for(int i=0,j=newstring.length()-1;i<j;i++,j--){
        if(newstring[i]!=newstring[j])return false;
    }
    return true;
}

void generate(string str){
    int odd=0,even=0;
    for(int i=0;i<str.length();i++){
        string temp="";
        for(int j=i;j<str.length();j++){
         temp+=str[j];
         if(checkPalindrome(temp) && temp.length()%2==1)
         odd++;
        else if(checkPalindrome(temp) && temp.length()%2==0)
        even++;
               }
    }
    cout<<even<<" "<<odd<<endl;
}

int main(){
    string str;
    cin>>str;
generate(str);
}