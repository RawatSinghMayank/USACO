#include<stdio.h>
#include<stdlib.h>
int  main(){
    FILE *ptr;
    ptr=fopen("data.txt","r");
    if(ptr==NULL){
        printf("NOG");
        exit(1);
    }
    char ch;
    int c=0;
while(1){
    ch=fgetc(ptr);
    if(ch==EOF)break;
    c++;}
    fclose(ptr);
    printf("%d",c);
}