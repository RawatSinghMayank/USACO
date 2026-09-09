#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter string one "<<endl;
    string s;
    cin>>s;
    // int c=1;
    // int max=0;
    // for(int i=0;i<s.length()-1;i++){
    //     c=1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]){
    //             c++;
    //         }
    //     }
    //     if(c>max){
    //         max=c;
    //     }
    // }
    //  for(int i=0;i<s.length()-1;i++){
    //     c=1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]){
    //             c++;
    //         }
    //     }
    // if(c==max){
    //     cout<<s[i]<<":"<<max<<endl;
    // }

    //  }
vector<int>v(26);
for(int i=0;i<s.length();i++){
    int a=(int)s[i];
    v[a-97]++;
}
int max=0;
for(int i=0;i<v.size();i++){
    if(v[i]>max){
        max=v[i];}}
        for(int i=0;i<v.size();i++){
           
            if(v[i]==max){
                 char ch=(char)(i+97);
                cout<<ch<<":"<<max<<endl;
            }}

     return 0;}