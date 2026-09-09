#include<stdio.h>
#include<string.h>
int main(){
    printf("enter the string ");
char s[100];
gets(s);
int i=0;
int c=0;
while(s[i]!='\0'){
c++;
i++;
}
for(int i=0,j=c-1;i<j;i++,j--){
    int temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
puts("reverse string is ");
puts(s);
}
