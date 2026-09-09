// #include <stdio.h>
// int main(){
//     int sum=0;
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
// sum=sum-i;
//         }
//         else {
//             sum=sum+i;
//         }
// }printf("sum is %d ",sum);
//        return 0;}
// // #include<stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     int sum=0;
// //     int sign=1;
// //     for(int i=1;i<=n;i++){
// //         sum=sum+sign*i;
// //         sign=-sign;
// //     }
// //     printf("sum is %d ",sum);
// //     return 0;}
#include <stdio.h>
int main(){
    int a=1,b=1;
    int c=(++a)|| (b++);
    int d=(b--) && (--a);
    printf("%d%d%d%d",d,c,b,a);
}