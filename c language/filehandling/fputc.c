#include<stdio.h>
#include<stdlib.h>
int  main(){
    FILE *ptr;
    ptr=fopen("data.txt","w");
    if(ptr==NULL){
        printf("NOG");
        exit(1);
    }
    char ch[100];
    printf("enter the strign ");
fgets(ch,100,stdin);
 
 int i=0;
 while(ch[i]!='\0'){
    fputc(ch[i],ptr);
    i++;
 }

 printf("data stored successfulyy");
 return 0;}