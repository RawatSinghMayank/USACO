#include <stdio.h>
#include <math.h>
int main(){
int n;

    while(n>=0){
    printf("Enter the number\n");
    scanf("%d",&n);
    float square=0;
    square=pow(n,2);
    if(n>=0){
    printf("The square of the entered number is :%f\n",square);
    }
}
return 0;} 