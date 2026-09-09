#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("number.txt","w");
    if(ptr==NULL){
        exit(1);
    }
    int n1,n2;
    printf("enter the number \n ");
    scanf("%d",&n1);
    putw(n1,ptr);
    fclose(ptr);
    ptr=fopen("number.txt","r");
    if(ptr==NULL){
        exit(1);
    }
    n2=getw(ptr);
printf("nu mber recieved from gile is %d",n2);
fclose(ptr);
return 0;}