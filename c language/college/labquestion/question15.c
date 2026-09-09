#include <stdio.h>
int main(){
    printf("Enter the number of elements in the array:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else { min=min;
        }
    }
    printf("Minimum number in the array is:%d",min);
    return 0;}