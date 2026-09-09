#include<stdio.h>
int prime(int x);
int count(int b[],int n){
 int c=0;
 for(int i=0;i<n;i++){
  if(prime(b[i])==0)
  c+=1;
 }return c;
}
int prime(int x){
    int c=0;
for(int i=1;i<=x;i++){
  if(x%i==0){
    c++;
 }
 }
 if(c==2)return 0;
 else return 1;
 
}
int main(){
 int c,n;
 printf("Enter the value of n");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 c=count(a,n);
 printf("%d",c);
 return 0;}
