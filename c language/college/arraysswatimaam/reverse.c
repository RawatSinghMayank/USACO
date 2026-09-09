// #include <stdio.h>
// int main(){
//     printf("enter the value of n\n");
//     int n;
//     scanf("%d",&n);
//         int arr[n];
//         printf("enter the elements of the array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int j=n-1;j>=0;j--){
//         printf(" %d ",arr[j]);
//     }
//     return 0;}
//Reverse by chaning positions
#include <stdio.h>
int main(){
    printf("enter the number of element s");
    int n;
    scanf("%d",&n);
       int arr[n];
        printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int t=0;
    // for(int i=0;i<n/2;i++){
    //     t=arr[i];
    //     arr[i]=arr[n-1-i];
    //     arr[n-i-1]=t;
    // }
    int i=0,j=n-1;
     for( i=0, j=n-1;i<j;j--,i++){
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    printf("printing reverse array \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}