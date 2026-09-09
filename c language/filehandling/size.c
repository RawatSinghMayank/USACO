#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr;
    ptr=fopen("g.txt","r");
    if(ptr==NULL){
        printf("no");
        exit(1);
    }
  fseek(ptr,0,SEEK_END);
  int n=ftell(ptr);
  printf("%d",n);
  fclose(ptr);
}