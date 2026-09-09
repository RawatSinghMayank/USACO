
    
//Write a c program to input a year from the user and check whether that year is a leap year or not.
#include <stdio.h>
int main(){
    printf("enter the year:");
    int n;
    scanf("%d",&n);
   
    if(n%100==0){
        if(n%400==0){
            printf("%d  is a leap  year : ",n);
        }
        else {
            printf(" %d is not a leap  year",n);
        }}
        else {
if(n%4==0){
    printf( "%d is a leap year  ",n);
}
else {
    printf(" %d is not a leap year",n);}
        }
return 0;}
// #include <stdio.h>
// int main(){
// printf("enter the three numbers\n");
//     int n1,n2,n3;
//     scanf("%d%d%d",&n1,&n2,&n3);
//     int max=n1;
//     if(n2>max)
//     max=n2;
//     if(n3>max)
//     max=n3;
//     printf("the max of three numbers is %d",max);
//     return 0;}
