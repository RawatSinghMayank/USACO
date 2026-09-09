

#include<iostream>
using  namespace std;
void rev(int n){
if(n<10){
cout<<n;
return;
}
else {
cout<<n%10;
rev(n/10);
}
}
int main(){
   int n;
   scanf("%d",&n);
  rev(n);
}