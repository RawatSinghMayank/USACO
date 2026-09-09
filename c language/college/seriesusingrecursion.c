// #include <stdio.h>
// int series(int n){
//     if(n==1){
//         printf("1");
//     }
//     else {
//         printf(" %d",series(n-1)+n);
//     }
//     return 0;}
//     int main(){
//         printf("enter the value of n:");
//         int n;
//         scanf("%d",&n);
//         series(n);
//     return 0;}
#include <stdio.h>
int series(int n){
    if(n==1){
        printf(" 1");
    }
    else {
        printf(" %d",n);
        series(n-1);
    
    }
    return 0;}
    int main(){
        printf("enter the value of n:");
        int n;
        scanf("%d",&n);
        series(n);
    return 0;}