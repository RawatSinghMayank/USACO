#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter the three sides of the triangle");
    scanf("%d  %d  %d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2){
        printf("triangle is valid");
    if(s1==s2 && s2==s3 ){
        printf("equilateral");
    }
    else if(s1==s2 || s2==s3 || s3==s1){
        printf("isosceles");
    }
    else { printf("scalene");
    }}
    else {
        printf("triangle is not valid");}
    return 0;}

