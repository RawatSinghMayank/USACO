// #include <stdio.h>
// int series(int n){
//     if(n<=1){
//         return n;
//     }
//     else 
//     {
//         printf("%d  ",n);
//          series(n-2);
        
//     }
// return 0;}
// int  main(){
//     printf("enter n");
//     int n;
//     scanf("%d",&n);
//     printf(" %d ",series(n));
//     return 0;}

// #include<stdio.h>
// #include<math.h>
// int  series(int n){
//     if(n==0){
//         return 0;
//     }
//         else { 
//              series(n-1);
//         int a=pow(n,2);
//      printf("%d + ",a);
//         }
//         }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
// int  main(){
//     printf("enter n");
//     int n;
//     scanf("%d",&n);
// series(n);
//     return 0;}
#include <stdio.h>
int series(int n){
    if(n==0){
        return 0;
    }
    else {
        if(n%2!=0){
        series(n-1);
        printf(" %d - ",n);}
        else { series(n-1);
        printf(" %d + ",n);}
    }
    return -1;
}
int main(){
    printf("enter n");
    int n;
    scanf("%d",&n);
    series(n);
}