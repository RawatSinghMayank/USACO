// #include  <iostream>
// int main(){
//     using namespace std;
//     int rev=0,n;
//     cin>>n;
//     int n1;
//     int n2=n;
//     while(n>0){
//         n1=n%10;
//         n=n/10;
//         rev=rev*10+n1;
//     }
//     cout<<rev+n2;;
// }

// factorial of no greater than 10
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
long long  fac=1;
for(int i=1;i<=n;i++){
    fac=fac*i;
}
printf("%lld",fac);
}