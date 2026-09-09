#include<stdio.h>
int main(){
char c;
int a=0,e=0,i=0,o=0,u=0;
printf("enter character");
while((c>=65&&c<=90) || (c>=97&&c<=122) || c==32)
{
 
 scanf("%c",&c);
  
 if(c=='a' || c=='A')
 {
 a+=1;
 }
 else if(c=='e' || c=='E')
 {
 e+=1;
 }
 else if(c=='o' || c=='O')
 {
 o+=1;
 }
  else if(c=='i' || c=='I')
 {
 i+=1;
 }
  else if(c=='u' || c=='U')
 {
 u+=1;
 }
}
printf("a= %d\ne= %d\ni= %d\no= %d\nu= %d\n ",a,e,i,o,u);
}