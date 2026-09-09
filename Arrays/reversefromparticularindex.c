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
 int a=0;
 int arr1[n-k];
 for(int i=k;i<n;i++){
    arr1[a]=arr[i];
    a++;
 }
    int temp=0;
 for(int i=0;i<(n-k)/2;i++)
{
     temp=arr1[i];
    arr1[i]=arr1[(n-k)-i-1];
    arr1[(n-k)-i-1]=temp;
}int b=0;

for(int i=k;i<n;i++){
    arr[i]=arr1[b];
    b++;}

printf("printing final array\n");
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
return 0;}

