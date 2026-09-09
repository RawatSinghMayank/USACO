#include <stdio.h>
int main(){
    printf("enter the value of n:");
    int n;
    scanf("%d",&n);
    int term1=0,term2=1;
    if(n==1){
        printf("%d ",term1);
    }
     if(n==2){
        printf("%d %d ",term1 ,term2);
    }
if(n>2) {
    printf("%d %d",term1,term2);
   
   for(int i=1;i<=n-2;i++){
     int c=term1+term2;
    printf(" %d",c);
    term1=term2;
    term2=c;
   }
}
return 0;}
