#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
   int n=10;
   int arr[10];
   for(int i=0;i<10;i++){
      scanf("%d",&arr[i]);
   }
   // for(int i=0;i<n-1;i++){ // bubble sort
   //    for(int j=0;j<n-1-i;j++){
   //       if(arr[j]>arr[j+1]){
   //          int temp=arr[j];
   //          arr[j]=arr[j+1];
   //          arr[j+1]=temp;
   //       }
   //    }
   // }
   // for(int i=0;i<n-1;i++){ // selection sort
   //    int min=INT_MAX;
   //    int minidx=-1;
   //    for(int j=i;j<n;j++){
   //       if(arr[j]<min){
   //          min=arr[j];
   //          minidx=j;
   //       }
   //    }
   //    int temp=arr[i];
   //    arr[i]=arr[minidx];
   //    arr[minidx]=temp;
   // }
   for(int i=1;i<n;i++){
      int j=i;  // insertion sort
      while(j>=1 && arr[j]<arr[j-1]){
         int temp=arr[j];
         arr[j]=arr[j-1];
         arr[j-1]=temp;
         j--;}}
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }
}