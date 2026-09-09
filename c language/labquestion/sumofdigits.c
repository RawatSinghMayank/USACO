// #include <stdio.h>
// int main(){
//     printf("Enter the number\n");
//     int n;
//     scanf("%d",&n);
//     int n1,sum=0;
//     while(n>0){
//         n1=n%10;
//         n=n/10;
//      sum=sum+n1;
//     }
//     printf("The sum of digits of the given number is:%d",sum);
//     return 0;}


#include <stdio.h>
int main(){
    printf("Enter the value of n\n");
    int n;
    int l=1;
    int a=1;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        for(int i=a;i<=n-1;i++){
        printf("  ");
    }
    for(int k=1;k<=l;k++){
        printf("* ");
    }
    l=l+2;
    a=a+1;
    printf("\n");
    }
    return 0;}
