#include <stdio.h>
int main(){
    printf("enter the value of n\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(int i=0,j=n-1;i<j;i++,j--){
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
   }
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);}
    return 0;}
