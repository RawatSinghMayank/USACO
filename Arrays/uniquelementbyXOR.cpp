#include <stdio.h>
int main(){
    printf("enter the total no of elements in the array \n");
    int n;
    scanf("%d",&n);
int arr[n];
printf("enter the element:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
printf("%d",ans);
}