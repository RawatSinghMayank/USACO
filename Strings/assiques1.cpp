#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    string s; int c=0;
    cin>>s;
    double sum=0;
int n=s.length();
for(int i=0;i<n;i++){
    int a=int(s[i]);
    int b=a-48;
    sum=sum+b*pow(10,n-i-1);
}
cout<<sum+10;
}