#include<stdio.h>
#include<stdlib.h>
int main(){
 FILE *ptr;
 ptr=fopen("fac.txt","a");
 if(ptr==NULL){
    printf("file not found ");
    exit(1);
 }
 int n;
 scanf("%d",&n);
 int fac=1;
 for(int i=1;i<=n;i++)
 fac=fac*i;
  fprintf(ptr,"factorial of the given number is %d",fac);
  printf("data stored in file successfully");
  fclose(ptr);
  return 0;}