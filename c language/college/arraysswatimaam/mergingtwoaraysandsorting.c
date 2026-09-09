// #include <stdio.h>
// int main(){
//     printf("enter no of elements in first array");
//     int n1;
//     scanf("%d",&n1);
//     int a[n1];
//     printf("enter the elements ");
//     for(int i=0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }
// printf("enter no of elements in second array");
// int n2;
// scanf("%d",&n2);
// int b[n2];
// printf("enter the elements");
// for(int i=0;i<n2;i++){
//     scanf("%d",&b[i]);
// } int max;
// int min;
// int arr[n1+n2];
// if(n1>n2){
// max=n1;
// min=n2;
// }
// else { max=n2;
// min=n1;}
// for(int i=0;i<min;i++){
//     arr[i]=a[i];
// }
// for(int i=0;i<max;i++){
//     arr[i+min]=b[i];}
//     printf("printing merged array");
//     for(int i=0;i<(n1+n2);i++){
//         printf("%d ",arr[i]);
//     }
//     for(int i=0;i<(n1+n2)-1;i++){
//         for(int j=i+1;j<n1+n2;j++){
//             if(arr[i]>arr[j]){
//          int temp=arr[i];
//          arr[i]=arr[j];
//          arr[j]=temp;
//             }
//         }
//     }
//     printf("printing sorted array");
//     for(int i=0;i<(n1+n2);i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;}

