#include <stdio.h>
#include <string.h>
int main(){
printf("enter the number");
    int n;
    int n1;
    scanf("%d",&n);
char str;
while(n>0){
    n1=n%10;
    n=n/10;
    str=str+n1;
}
printf("the value of reversed number is:%c",str);
return 0;}