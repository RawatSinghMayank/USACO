#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("a.txt","r");
    if(ptr==NULL)
    {
        exit(1);
    }
    char ch;
int len=0;
fseek(ptr,0,SEEK_END);
len=ftell(ptr);
int arr[len];
for (int i=0;i<len;i++)
arr[i]=-1;
int a=0; 
rewind(ptr);
while(1){
ch=fgetc(ptr);
if(ch==EOF)break;
if(ch!=' ')
arr[a++]=ch-'0';
}
FILE  *ptr1;
ptr1=fopen("g.txt","w+");
for (int i=0;i<len;i++){
if(arr[i]!=-1){
char nig=arr[i]+'0';
fputc(nig,ptr1);}}
while(1){ch=fgetc(ptr1);
if(ch==EOF)break;
printf("%c",ch);
}
fclose(ptr);
fclose(ptr1);
return 0;}