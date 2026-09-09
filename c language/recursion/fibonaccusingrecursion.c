// #include <stdio.h>
// int main(){
//     printf("enter the value of n");
//     int n;
//     int t;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
// for(int i=0,j=n-1;i<j;i++,j--){
//     int t=a[i];
//     a[i]=a[j];
//     a[j]=t;
// }
// for(int i=0;i<n;i++){
//     printf("%d",a[i]);
// }
// return 0;}
#include <stdio.h>
int main(){
    printf("enter the value of n");
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);

    }
    printf("enter the index");
    int n1;
    scanf("%d",&n1);
    for(int i=n1;i<n-n1;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;}