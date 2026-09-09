#include <stdio.h>
int main(){
    int num;
    printf("enter the three digit number");
    scanf("%d",&num);
    int last;
    int first;
    last = num%10;
int mid=num/10;
first=mid/10;
int sum=first + last;
printf("%d",sum);
return 0;}