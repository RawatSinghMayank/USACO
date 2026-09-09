#include<stdio.h>
#include<stdlib.h>
int  main(){
    FILE *ptr1;
    FILE *ptr2;
    FILE *ptr3;
    ptr1=fopen("data1.txt","r");
    ptr2=fopen("data2.txt","r");
     ptr3=fopen("data3.txt","w");
    if(ptr1==NULL || ptr2==NULL || ptr3==NULL){
        printf("error ");
        exit(1);
    }
    char ch;
    while(1){
        ch=getc(ptr1);
        if(ch==EOF)break;
        fputc(ch,ptr3);
    }
    fclose(ptr1);
    fputs("\n",ptr3);
      while(1){
        ch=getc(ptr2);
        if(ch==EOF)break;
        fputc(ch,ptr3);
    }
    fclose(ptr2);
    fclose(ptr3);
    return 0;}