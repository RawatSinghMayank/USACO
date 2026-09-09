#include<stdio.h>
int main(){
int product=1;    int n;
    printf("enter the first number");
    scanf("%d",&n);
    printf("enter the second number");
    int n1;
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++){
        product=product*n;
    }
    printf("%d",product);
    return 0;}