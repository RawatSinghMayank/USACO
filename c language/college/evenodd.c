#include <stdio.h>
int main(){
    int n;
    double even=0,odd=0;
    scanf("%d",&n);
    int i=1;

    while(i<=n){
        if(i%2==0){
            even=even+i;  
        }
        else {

            odd=odd+i;}
            i++;}
    
    printf("the sum of even numbers is:%lf",even);
    printf("the sum of odd numbers is: %lf",odd);
    
    return 0;}


