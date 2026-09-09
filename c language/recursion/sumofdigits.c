#include <stdio.h>
int n1=0; 
int total=0;
int nnn=0;
int sum(int n){
    if(n==0){
        return 0;}
        else {

//      n1=n%10;
//      n=n/10;

//   nnn=nnn+n1;
// sum(n);
return (n%10+sum(n/10));
}
}
int main(){
    printf("enter the value of n");
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;}