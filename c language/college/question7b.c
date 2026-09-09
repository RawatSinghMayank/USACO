#include <stdio.h>
int main(){
    printf("Enter the value of n\n");
    int n; int a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);}
            for(int k=1;k<=((2*n)-(2*i));k++){
                printf(" ");
            }
         for(int l=a;l>=1;l--){
     printf("%d",l);}
     a++;
    printf("\n");
    }
    return 0;}