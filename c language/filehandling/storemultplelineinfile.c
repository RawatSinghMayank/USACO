#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("f.txt","w");
    if(ptr==NULL)
    exit(1);


char ch[100];
printf("enter no of lines ");
int n;
scanf("%d",&n);
getchar();
for(int i=1;i<=n;i++){
    gets(ch);
    fputs(ch,ptr);
    fputs("\n",ptr);
}
fclose(ptr);
return 0;}
