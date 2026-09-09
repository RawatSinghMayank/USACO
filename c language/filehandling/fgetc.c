#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr;
    ptr=fopen("read.txt","r");
    if(ptr==NULL){
        printf("file not found ");
        exit(1);
    }
    char ch;
    while(1){
        
        ch=fgetc(ptr);
        if(ch==EOF)break;
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;}