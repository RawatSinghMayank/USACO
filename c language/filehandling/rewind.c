#include<stdio.h>
#include<stdlib.h>
int  main(){
    FILE *ptr;
    ptr=fopen("string.txt","w+");
    if(ptr==NULL)
    exit(1);
    char ch[1000],ch1;
    printf("enter line of text ");
    gets(ch);
    fputs(ch,ptr);
    rewind(ptr);
    while(1){
        ch1=getc(ptr);
        if(ch1==EOF)
        break;
        printf("%c",ch1);
    }
    fclose(ptr);
    return 0;}