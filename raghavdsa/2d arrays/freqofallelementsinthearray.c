#include <stdio.h>
int main(){
    printf("enter the total no of elements in the array \n");
    int n;
    scanf("%d",&n);
int arr[n];
printf("enter the element:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}int c=1;

for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
            c++;}
            else if(arr[i]!=arr[i+1]){
                printf("\nfrequency of %d is : %d",arr[i],c);
                
                c=1;
                   }
    }
}
