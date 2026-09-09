#include <stdio.h>
int main(){
    int n;int s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
s=s+i;
        }

    }
    if(s==n){
        printf("the number is perfect");

    }
    else {
        printf("the number is not perfect");
    }
    return 0;}