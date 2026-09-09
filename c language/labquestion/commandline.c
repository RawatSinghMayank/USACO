#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
FILE*ptr1;
    FILE*ptr2;
    FILE*ptr3;
    ptr1=fopen("Numbers.txt","w+");
    ptr2=fopen("even.txt","w+");
    ptr3=fopen("odd.txt","w+");
    if(ptr1==NULL || ptr2==NULL || ptr3==NULL){
        printf("Error:Cannot open file \n");
        exit(1);
    }
printf("Enter 20 integers through command line argumnent \n");
int arr[20];
for(int i=0;i<20;i++){
    arr[i]=atoi(argv[i+1]);
}
fwrite(arr,sizeof(int),20,ptr1); 
rewind(ptr1);
fread(arr,sizeof(int),20,ptr1);
for(int i=0;i<20;i++){
    if(arr[i]%2==0)
    putw(arr[i],ptr2);
    else putw(arr[i],ptr3);
}
rewind(ptr1);
rewind(ptr2);
rewind(ptr3);
char ch;
printf("File:Numbers.txt:");
while(1){
ch=getw(ptr1);
if(ch==EOF)break;
printf("%d ",ch);
}
printf("\n");
printf("File:even.txt:");
while(1){
ch=getw(ptr2);
if(ch==EOF)break;
printf("%d ",ch);
}
printf("\n");
printf("File:odd.txt:");
while(1){
ch=getw(ptr3);
if(ch==EOF)break;
printf("%d ",ch);
}
return 0;}
