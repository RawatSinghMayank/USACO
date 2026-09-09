// #include <stdio.h>
// int main(){
//     printf("enter n");
//     int n;
//     scanf("%d",&n);
//       int arr[n];
//         printf("enter the elements of the array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of k");
//     int k;
//     scanf("%d",&k);
// int arr1[k];
// for(int i=0;i<k;i++){
//     arr1[i]=arr[i];
// }
// for(int i=0;i<k/2;i++){
//  int temp=arr1[i];
//  arr1[i]=arr1[k-i-1];
//  arr1[k-i-1]=temp;
// }
// for(int i=0;i<k;i++){
//     arr[i]=arr1[i];
// }
// printf("printing final array\n");
// for(int i=0;i<n;i++){
//     printf("%d  ",arr[i]);
// }
// return 0;}

#include <stdio.h>
int main(){
    printf("enter n");
    int n;
    scanf("%d",&n);
      int arr[n];
        printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of k");
    int k;
    scanf("%d",&k);

for(int i=0;i<k/2;i++){
  int temp=arr[i];
  arr[i]=arr[k-i-1];
  arr[k-i-1]=temp;
}

printf("printing final array\n");
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
return 0;}

