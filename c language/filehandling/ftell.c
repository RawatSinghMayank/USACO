#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("g.txt","r");
    if(ptr==NULL)
    exit(1);
    char ch;
    int n=ftell(ptr);
    printf("%d\n",n);
    fseek(ptr,7,SEEK_SET);
   n=ftell(ptr);
   printf("%d\n",n);
   fseek(ptr,3,SEEK_CUR);
   n=ftell(ptr);
   printf("%d\n",n);
    fclose(ptr);
    return 0;}