#include <stdio.h>
int main(){
float a,b;
char  ch;
printf("enter the value of a and b\n");
scanf("%f %f ",&a ,&b);
  printf("enter + for addition ,- for subtraction , * for multiplication ,/ for division \n");
scanf("%c",&ch);
switch(ch)
{
    case 97:{
printf("the sum of two numbers is %f",a+b);
break;}
case '-':
{printf("the subtraction of two numbers is %f",a-b);
break;
}
case '*':
{
    printf("the multiplicaiton of two numbers is %f",a*b);
break;}
case '/':
{ if(b!=0){
    printf("the division of two numbers is %f ",(float)a/b);}
    else {
        printf("cannot divide no by 0");}
break;}
default:
{
    printf("wrong choice");
}
}
return 0;}
