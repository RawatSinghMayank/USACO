#include <iostream>
#include<cmath>
  double log(int a,int n){
    if(n==0){
        return 1;
    }
    double x=pow(a,n/2);
     if(n%2==0){
        return x*x;
    }
    else {
        return x*x*a;
    }
  }
int main(){
using namespace std;
    int a,b;
    cout<<"enter a and b"<<endl;
cin>>a>>b;
cout<<log(a,b);
}