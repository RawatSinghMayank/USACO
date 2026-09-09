// // #include <stdio.h>
// // int Perfectnumber(int m,int  n);
// // int main(){
// //     int m,n;
// //     printf("Enter the value of m:");
// //     scanf("%d",&m);
// //     printf("Enter the value of n:");
// //      scanf("%d",&n);
// //   Perfectnumber(m,n);
 
// //     return 0;}
              
// // int Perfectnumber(int m,int  n){
// //     int sum=0;
// //         printf("Perfect numbers beteen m and n are:");
// //     for( int i=m;i<=n;i++){
// //         sum=0;
// //         for( int j=1;j<i;j++){
// //             if(i%j==0){
// //                 sum=sum+j;
// //             } }
// //             if(sum==i){
// //                 printf("%d ",i);
// //             }
// //     }

// // }


  

// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
//     int arr[2*n-1][2*n-1];
//     int total=(2*n-1)*(2*n-1);
//     int c=0;
//     int n1=n;
//     int minr=0,minc=0,maxr=2*n-2,maxc=2*n-2;
//    int a=0;
//     while(c<total){
//    while(a<=maxc){
//     c++;
//     arr[minr][a++]=n;
//    }
//    minr++;
//    a=minr;
//    while(a<=maxr){
//     c++;arr[a++][maxc]=n;
//    }
//    maxc--;
//    a=maxc;
//    while(a>=minc){
//     c++;arr[maxr][a--]=n;
//    }
// maxr--;
// a=maxr;
// while(a>=minr){
//     c++;arr[a--][minc]=n;
// }
// minc++;
// a=minc;
// n--;
//     }
//     for(int i=0;i<2*n1-1;i++){
//  for(int j=0;j<2*n1-1;j++){
//     printf("%d",arr[i][j]);
//  }
//  printf("\n");
//     }
// }
    

#include<stdio.h>
#include<string.h>
void reverse(char ch[],int n1,int n2){

 for(int i=n1,j=n2;i<j;i++,j--){
 char temp=ch[i];
ch[i]=ch[j];
ch[j]=temp;
} 
}
 int main(){
char ch[100000];
gets(ch);
int n=strlen(ch);
reverse(ch,0,n-1);

int c1=0,c2=-1;
for(int i=0;i<n;i++){
if(ch[i]==' ' || i==n-1){
 c1=c2;
if(i==n-1) c2=i+1;
else c2=i;

reverse(ch,c1+1,c2-1);
}}
printf("%s",ch);
return 0;}