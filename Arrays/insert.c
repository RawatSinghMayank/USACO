#include <stdio.h>
int main(){
        int arr[100];
        printf("enter total elements");
        int n;
        scanf("%d",&n);
printf("enter the elements ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter the position and the element you want to insert");
int n1,n2;
scanf("%d%d",&n1,&n2);
for(int i=n;i>=n1;i--){
    arr[i]=arr[i-1];
}arr[n1-1]=n2;
printf("printing new array");
for(int i=0;i<n+1;i++){
    printf("%d ",arr[i]);
}
return 0;}