#include <stdio.h>
int main(){
    printf("Enter the number of elements in the array:");
    int n;
    scanf("%d",&n);
    int arr[n]; 
    int t=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  
for(int i=0;i<n-1;i++){
  for( int j=i+1;j<n;j++){
     if(arr[i]>arr[j]){
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
    }
}}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

return 0;} 