#include <stdio.h>
#include <math.h>
int main(){
    int n;int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
   sum=sum+pow(i,2);
    }printf("%d",sum);
    return 0;}