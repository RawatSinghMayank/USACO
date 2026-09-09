#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("g.txt","r");
    if(ptr==NULL)
    exit(1);
    char ch;
    fseek(ptr,7,SEEK_SET);
    while(!feof(ptr)){
        ch=getc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;}