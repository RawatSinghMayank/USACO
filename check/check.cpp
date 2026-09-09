// #include<bits/stdc++.h>
//    using namespace std; string reverseWords(string s) {
//        int n=s.length();
// string s1;
// int c=0;
//      for(int i=0;i<n;i++){
//         if(s[i]!=' '){ c++;s1=s1+ s[i];}
//    else if(s[i]!=' ' && s[i+1]==' ' && s[i+2]!=' '){
//     s1=s1+s[i];
//    }
//  else if(s[i]==' ' && i!=n-1 && s[i+1]!=' ' && c>0){
//     s1=s1+s[i];
//    }}
// int n1=s1.length();
// int c1=0,c2=-1;

// reverse(s1.begin(),s1.end());
// for(int i=0;i<n1;i++){
//     if(s1[i]==' ' || i==n1-1){
//         c1=c2;
//         if(i==n1-1)c2=i+1;
//         else c2=i;
//         reverse(s1.begin()+c1+1,s1.begin()+c2);
//     }
// }
// return s1;
  
//     }
//     int main(){
//       string s="  hello world  ";
//       string s1=reverseWords(s);
//       cout<<s1;
//     }
#include<bits/stdc++.h>
using namespace std;
   string sortSentence(string s) {
        string ans;
        int i=0,j=0;
    int n=s.length();
        while(i<n){
            if(s[i]>='1' && s[i]<='9'){
                ans=ans+s[i];
              while(j<i){
                  ans=ans+s[j];
              j++;} j=i+2; ans=ans+" ";}i++;}
        
     return ans;   
    }
    int main(){
      string s="is2 sentence4 This1 a3";
      string s1=sortSentence(s);
      cout<<s1;
    }