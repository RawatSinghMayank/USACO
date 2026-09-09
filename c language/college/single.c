#include <stdio.h>
int main(){
    printf("enter the value of n");
    int n;
    scanf("%d",&n);
    int odd=1;
    int i=1;
    for(i;i<=n;i++){
        printf("%d",odd);
       
        odd=odd+2;
    }
    }