/*Program to read the value of x from the user and calculate the final value of function f(x) for the following equation as shown.
f(x)=x^2+2 if 0<=x<=10
f(x)=x^2+2x if 11<=x<=20
f(x)=x^3+2x^2 if 21<=x<=30
f(x)=0 if x>30 */
#include <stdio.h>
#include <math.h>
int main(){
    float fx=0;
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    if(x>=0 && x<=10){
    fx=pow(x,2)+2;
    }
    else if(x>=11 && x<=20){
    fx=pow(x,2)+x+x;
    }
    else if(x>=21 && x<=30){
        fx=pow(x,3)+ pow(x,2)+ pow(x,2);
    }
    else {
        fx=0;}
        printf("The value of function f(x) is : %0.3f",fx);
        return 0;}