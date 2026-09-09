#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *ptr;
ptr=fopen("n.txt","r");
if(ptr==NULL){
    printf("file not foud ");
    exit(1);
}
char ch[1000];
fgets(ch,100,ptr);
puts(ch);
fclose(ptr);
return 0;}