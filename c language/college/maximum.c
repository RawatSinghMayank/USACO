#include <stdio.h>
int main(){
    int max,max1,num1,num2,num3;
    printf("enter the numbers");
    scanf("%d %d %d",&num1,&num2,&num3);
    max=0;
    max1=0;
if(num1>num2){
    max=num1;

}
else {max=num2;
}
if(num3>max){
    max1=num3;
}
else {max1=max;}
printf("%d",max1);
return 0;}