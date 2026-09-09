// #include<bits/stdc++.h>
// using namespace std;
// int power(int a,int b){
//      if(b==0)return 1;
//      else return a*power(a,b-1);
// }
// int main(){
// cout<<power(3,4);
// }
#include<bits/stdc++.h>
using namespace std;
int  power(int a,int b){
     if(b==0)return 1;
     // else {
     //      if(b%2==0){
     //           return power(a*a,b/2);
     //      }
     //      else { return power(a*a,b/2)*a;
     //      }
     // }
     else {
     int ans=power(a,b/2);
     if(b%2==0){
          return ans*ans;}
          else { return a*ans*ans;}
}
}
int main(){
     int a,b;
     cin>>a>>b;
     cout<<power(2,-2);
return 0;}
