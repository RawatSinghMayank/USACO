#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
int c=0;
    for(int i=0;i<s.length();i++){
        
    char ch=' ';

    int a=int(ch);
    if(s[i]==ch  &&  s[i+1]!=ch){
c++;
    }}
    cout<<"total words are "<<c+1;
}