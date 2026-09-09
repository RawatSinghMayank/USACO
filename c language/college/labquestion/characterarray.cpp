// // #include <stdio.h>
// // int main(){
// //     printf("enter the number of elements in the array: ");
// // int n; 
// // scanf("%d",&n);
// // int arr[n];
// // for(int i=0;i<n;i++){
// //     scanf("%d",&arr[i]);
// // }
// // int min=arr[0];
// // int max=arr[0];
// // for(int i=0;i<n;i++){
// //     if(arr[i]>max){
// //         max=arr[i];}
// //         if(arr[i]<min){
// //             min=arr[i];}}

// // printf("max of all the elements is :%d,min of all the elements is %d",max,min);
// // return 0;}
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of elements");
//     scanf("%d",&n);
//     char arr[n];
//     int alpha=0,digit=0,special=0;
//     for(int i=0;i<n;i++){

//         scanf("%c",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//      if(arr[i]>='0' && arr[i]<='9'){
//         digit++;
//      }
//      else  if((arr[i]>=97 && arr[i]<=122) || (arr[i]>=65 && arr[i]<=90)){
//         alpha++;
//      }
//      else  { special++;}
//     }
//     printf("the number of alphabets is %d,the number of digit is %d, the number of special symbols is %d",alpha,digit,special);
//     return 0;}
#include <iostream>
int main(){
   int arr[3]={1,2,3};
   for(int i=0;i<3;i++){
std::cout<<&arr[i]<<std::endl;
}}