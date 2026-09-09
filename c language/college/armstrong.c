// #include <stdio.h>
// #include<math.h>
// int main(){
//     printf("Enter the number \n");
//     int n; int sum=0;
//     int n1;
   
//     scanf("%d",&n);
//      int temp=n;
//     while(n>0){
//         n1=n%10;
//         n=n/10;
//         int cubes=pow(n1,3);
//      sum=sum+cubes;
     
//     }
//     if(sum==temp){
//         printf("Number is armstrong");
//     }
//     else {
//         printf("Number is not armstrong");
//     }
//     return 0;
//     }
   
   #include <stdio.h>
   #include <math.h>
   int main(){
    printf("Enter the value of n\n");
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=7;i++){
        sum=sum+(pow((n-1),i))/(i*n);
    }
    printf("The sum of the given series is :%f",sum);
   }
