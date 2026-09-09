 #include<stdio.h>
int rev(int n){

  int r=0;
if(n==0){
    return 0;}
    else {
 r=r*10+n%10;
 rev(n/10);
    }
    return r;
}
int main(){
 int n ;
     scanf("%d",&n);
   printf("%d", rev(n));
   }

 