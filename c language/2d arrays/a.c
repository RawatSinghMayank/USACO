#include  <stdio.h>
int main(){
    printf("enter the no of elemets in array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("printing\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("enter the elements to be searched\n");
    int nn;
    scanf("%d",&nn);
    int mid,low=0,high=n-1;
    mid=(low+high)/2;
    while(low<=high){
    if(arr[mid]=nn){
  printf("element found at index %d", mid+1);
  break;
    }
     if(arr[mid]<nn){
        low=mid+1;
    }
    else {
    high=mid-1;
    }
    } 
}
