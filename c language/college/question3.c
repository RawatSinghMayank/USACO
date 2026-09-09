#include <stdio.h>
int main()  
{ float sum=0;
float a=1;
    printf("Enter the value of n\n");
    int n,fac=1;
   scanf("%d",&n);
     for(float j=1;j<=n-1;j++){
   for(int i=1;i<=j;i++){
fac=fac*i;
   }
  
   sum=sum+ ((a*j)/fac);
   fac=1;
   a=-a;
   }

printf("Sum of the given series is :%f",sum);
return 0;}