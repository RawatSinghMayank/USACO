#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
string f;
getline(cin,f);
stringstream str(f);
string temp;
vector<string>s;
while(str>>temp){
s.push_back(temp);
}
 for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size()-1-i;j++){
            if(s[j]>s[j+1]){
                string temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
