#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("g.txt","w");
    if(ptr==NULL){
        printf("file not found ");
        exit(1);
    }
    char ch[100];
    printf("enter the string ");
    fgets(ch,100,stdin);
    fputs(ch,ptr);
    fclose(ptr);
    return 0;}