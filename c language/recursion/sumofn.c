// #include <stdio.h>
// int sum(int n){
//     if(n==0){
//         return 0;}
//         else {
//             return n+sum(n-1);
//         }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;}
 #include <stdio.h>
int sum(int n){
    if(n==0){
        printf("");}// 1+2+3+4+5..n
        //n+ n-1+:;;;;;; 5+4+3+2+1
        else {
  
            printf(" %d ", n+sum(n-1));
        }
        
return 0 ;}
int main(){
    int n;
    scanf("%d",&n);
sum(n);
     return 0;}