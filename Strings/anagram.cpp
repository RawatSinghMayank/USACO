#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter string one "<<endl;
    string s;
    cin>>s;
    cout<<"enter string two "<<endl;
    string s1;
    cin>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]-s1[i]!=0){
        cout<<"they are not anagrams "<<endl;
        break;}
    }
    cout<<"they are anagrams "<<endl;
    

}
