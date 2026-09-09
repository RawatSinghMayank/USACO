// #include <stdio.h>
// #include<math.h>
// int main(){
//     printf("enter the number");
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+pow(i,i);}
//         printf("%d",sum);
//         return 0;}
// #include <stdio.h>
// int main(){
//     printf("enter the number");
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     int fac=1;
//     for(int i=1;i<=n;i++){
//        fac=fac*i;
//         sum=sum+fac;
//     }
//     printf("%d",sum);}

// #include <stdio.h>
// int main(){
//      printf("enter the number");
//     int n;
//     scanf("%d",&n);
//     float sum=0;
//     int fac=1;
//     for(int i=1;i<=n;i++){
//        fac=fac*i;
//        sum=sum+(1.0/fac);
//     }
//     printf("%f",sum);
// }
// #include <stdio.h>
// int main(){
//     printf("enter the number");
//     int n;
//     scanf("%d",&n);
// int j=2;    int sum=0;
// for(int i=1;i<n;i++){
    
// sum=sum+j;
// j=j+2;
// }
// printf("%d",sum+1);
// return 0;
// }
// #include   <stdio.h>
// int main(){
//     printf("enter the number");
//     int n;int sum=0;int x=1;
//     scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     sum=sum+x;
//     x=x+2;
// }
// printf("%d",sum);
// return 0;}
// #include <stdio.h>
// int main(){
//     int n; int sum=0;int i=-1;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
// sum=sum+(-1*i);
//         }
//         else {
//             sum=sum+i;
//         }}
//         printf("%d",sum);
//         return 0;}
#include <stdio.h>
int main(){
    int sum=0;
    printf("enter the number");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int j=1;
        for(int x=1;x<=i;x++){
            sum=sum+x;
        }
    }
    printf("%d",sum);
    return 0;}