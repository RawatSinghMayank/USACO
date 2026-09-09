#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int i=0,j=0,len,si,e;
    int maxi=-1;
    while(i<n){

        if(s[i]!=' '&& i<n){
            i++;
            len=i-j;
        }
        else if(len>maxi){
            maxi=len;
            si=j;
            e=i;
            i++; j=i;
        }
        
    }
    for(int c=si;c<=e;c++){
        cout<<s[c];
    }
} 