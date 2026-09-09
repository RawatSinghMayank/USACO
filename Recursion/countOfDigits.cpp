#include<bits/stdc++.h>
using namespace std;
int noOfDigits(int n){
if(n==0)return 0;
int count=noOfDigits(n/10)+1;
return count;

}

int main(){
int n;
cin>>n;
cout<<noOfDigits(n);
return 0;
}