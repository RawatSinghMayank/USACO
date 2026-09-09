// // // #include <stdio.h>
// // // int main(){
// // //     printf("enter the value of n\n");
// // //     int n;
// // //     scanf("%d",&n);
// // //     int arr[n];
// // //     printf("enter the elements of the array \n");
// // //     for(int i=0;i<n;i++){
// // //         scanf("%d",&arr[i]);
// // //     }
// // //     printf("enter the value of element k \n");
// // //     int n1;
// // //     scanf("%d",&n1);
// // //     for(int i=0;i<n;i++){
// // //         if(arr[i]==n1){
// // //             printf("element %d is found ",n1);
// // //        break; }
// // //    else { printf("element %d is not found",n1);
// // //    break; }}
// // //     return 0;}

// // #include <stdio.h>
// // int main(){
// //     printf("enter the value of n\n");
// //     int n;
// //     scanf("%d",&n);
// //     int arr[n];int x=0;
// //     printf("enter the elements of the array \n");
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     printf("enter the value of element k \n");
// //     int n1;
// //     scanf("%d",&n1);
// //     for(int i=0;i<n;i++){
// //         if(arr[i]==n1){
// //             x++;
// //        }}
// //        if(x>0){
// //        printf("element %d is found %d times ",n1,x);}
// //    else { printf("element %d is not found",n1);
// //   }
// //     return 0;}


// #include <stdio.h>
// int main(){
//     printf("enter the value of n\n");
//     int n;
//     scanf("%d",&n);
//     int arr[n];int x=0; int y;
//     printf("enter the elements of the array \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of element k \n");
//     int n1;
//     scanf("%d",&n1);
//     for(int i=0;i<n;i++){
//         if(arr[i]==n1){
//             x++;
//             if(x==1){
//                 y=i;}
//        }}
//        if(x>0){
//        printf("element %d is found %d times and the first index of %d is %d ",n1,x,n1,y);}
//    else { printf("element %d is not found",n1);
//   }
//     return 0;}

#include <stdio.h>
int main(){
    printf("enter the value of n\n");
    int n;
    scanf("%d",&n);
    int arr[n];int x=0; int y;
    printf("enter the elements of the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of element k \n");
    int n1;
    scanf("%d",&n1);
    for(int i=n;i>0;i--){
        if(arr[i]==n1){
            x++;
            if(x==1){
                y=i;
            
       }}}
       if(x>0){
       printf("element %d is found %d times and the last index of %d is %d ",n1,x,n1,y);}
   else { printf("element %d is not found",n1);
  }
    return 0;}


