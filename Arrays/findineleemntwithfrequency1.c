#include <stdio.h>
int main(){
    printf("enter no of elements\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int c=1; int arr1[100];
for(int i=0;i<n;i++){
    c=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]!=-1){
            if(arr[j]==arr[i]){
                c++;
              arr[j]=-1;   
            }
        }
      }  arr1[i]=c;
}
for(int i=0;i<n;i++){
    if(arr[i]!=-1  && arr1[i]==1){
     printf("element that appeared only one time is %d ",arr[i]);
    }
}




return 0;}
