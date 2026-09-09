#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr;
    ptr=fopen("append.txt","a");
    if(ptr==NULL){
        printf("File not found ");
        exit(1);
    }
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    fprintf(ptr,"Number is=%d",n);
    printf("number stored successfully");
    return 0;} 