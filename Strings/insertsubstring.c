#include<stdio.h>
#include<string.h>
int main(){
char ch1[100000];
char ch2[10000];
printf("enter the string ");gets(ch1);
printf("\n enter the substring ");
gets (ch2);
printf("enter the index ");
int n1=strlen(ch1);
int n2=strlen(ch2);
int x;
printf("enter the index ");

scanf("%d",&x);
int a=0;
int n=n1+n2;
for(int i=n-1;i>=x;i--){
    ch1[i]=ch1[i-n2];}    
for(int i=x;i<x+n2;i++){
    ch1[i]=ch2[a++];
}

for(int i=0;i<n;i++){
    printf("%c",ch1[i]);}
    return 0;}