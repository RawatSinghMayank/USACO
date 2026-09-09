#include <stdio.h>
int main(){
    printf("enter the value of n");
   int n; 
    scanf("%d",&n);
    int sum=0;
 for(int i=1;i<=n;i++){
    sum=sum+i;
 }
 printf("%d",sum);
 return 0;}