#include<stdio.h>
#include<stdlib.h>
int main(){
 FILE *ptr;
 ptr=fopen("table.txt","w");
 if(ptr==NULL){
    printf("file not found ");
    exit(1);
 }
 int n;
 scanf("%d",&n);
 for(int i=1;i<=10;i++){
 printf("%d * %d = %d",n,i,n*i);
 printf("\n");
 }
 for(int i=1;i<=10;i++){
    fprintf(ptr,"\n%d * %d = %d",n,i,n*i);

 }
 return 0;}
