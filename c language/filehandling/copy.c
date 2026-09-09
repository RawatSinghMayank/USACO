#include<stdio.h>
#include<stdlib.h>
int  main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("data1.txt","r");
    ptr2=fopen("data2.txt","w");
    if(ptr1==NULL || ptr2==NULL){
        printf("error ");
        exit(1);
    }
    char ch;
    while(1){
        ch=fgetc(ptr1);
        if(ch==EOF)break;
        fputc(ch,ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}