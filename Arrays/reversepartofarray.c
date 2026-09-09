#include  <stdio.h>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
int reverse(int arr[],int n1,int n2){
    int temp=0;
    for(int i=n1,j=n2;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

    int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
print(arr,n);
printf("\nenter the index n1 and n2");
int n1,n2;
scanf("%d%d",&n1,&n2);
        reverse(arr,n1,n2);
        printf("printing reversed array\n");
        print(arr,n);
        return 0;}