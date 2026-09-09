#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("a.txt","r");
    if(ptr==NULL){
        printf("no g");
        exit(1);
    }
    char ch;
    while(!feof(ptr)){
        ch=fgetc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;}