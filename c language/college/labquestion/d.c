// #include <stdio.h>
// int Perfectnumber(int m,int  n);
// int main(){
//     int m,n;
//     printf("Enter the value of m:");
//     scanf("%d",&m);
//     printf("Enter the value of n:");
//      scanf("%d",&n);
//   Perfectnumber(m,n);
 
//     return 0;}
              
// int Perfectnumber(int m,int  n){
//     int sum=0;
//         printf("Perfect numbers beteen m and n are:");
//     for( int i=m;i<=n;i++){
//         sum=0;
//         for( int j=1;j<i;j++){
//             if(i%j==0){
//                 sum=sum+j;
//             } }
//             if(sum==i){
//                 printf("%d ",i);
//             }
//     }

// }


  

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
    int arr[2*n-1][2*n-1];
    int total=(2*n-1)*(2*n-1);
    int c=0;
    int n1=n;
    int minr=0,minc=0,maxr=2*n-2,maxc=2*n-2;
   int a=0;
    while(c<total){
   while(a<=maxc){
    c++;
    arr[minr][a++]=n;
   }
   minr++;
   a=minr;
   while(a<=maxr){
    c++;arr[a++][maxc]=n;
   }
   maxc--;
   a=maxc;
   while(a>=minc){
    c++;arr[maxr][a--]=n;
   }
maxr--;
a=maxr;
while(a>=minr){
    c++;arr[a--][minc]=n;
}
minc++;
a=minc;
n--;
    }
    for(int i=0;i<2*n1-1;i++){
 for(int j=0;j<2*n1-1;j++){
    printf("%d",arr[i][j]);
 }
 printf("\n");
    }
}
    

