#include <stdio.h>
int main(){
    printf("enter the no of elements in first array");
    int n1;
scanf("%d",&n1);
int a[n1];
    printf("enter the elements");
for(int i=0;i<n1;i++){
    scanf("%d",&a[i]);
}
printf("enter no of elements in second array");
int n2;
scanf("%d",&n2);
int b[n2];
printf("enter the elements");
for(int i=0;i<n2;i++){
    scanf("%d",&b[i]);
}
int max,min;
if(n1>n2){
    max=n1;
    min=n2;
}
else { max=n2;
min=n1;
}
int arr[max];
for(int i=0;i<min;i++){
arr[i]=a[i]+b[i];
}
if(n1>n2){
    for(int i=min;i<max;i++){
        arr[i]=a[i];}}
        else { 
            for(int i=min;i<max;i++){
                arr[i]=b[i];}
        }
        printf("new array is :");
        for(int i=0;i<max;i++){
            printf("%d ",arr[i]);}
return 0;}