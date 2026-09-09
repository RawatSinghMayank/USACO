#include<bits/stdc++.h>
using namespace std;
void gen(string s,int n,int op,int cl){
 if(s.length()==(2*n)){
 cout<<s<<endl;
 return ;}
if(cl<op)
 gen(s+")",n,op,cl+1);

if(op<n)
 gen(s+"(",n,op+1,cl);


}
int main(){
int n;
cin>>n;
gen("",n,0,0);
return 0;}