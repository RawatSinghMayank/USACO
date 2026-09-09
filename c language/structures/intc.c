#include<stdio.h>
void sort(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;}
        }
    }    return ;}
        


int main(){
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
      for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }    printf("\n");
    sort(arr);
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;}