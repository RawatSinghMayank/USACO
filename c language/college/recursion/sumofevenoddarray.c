#include <stdio.h>
int main(){
    printf("enter the value of n");
    int n; int i=0;
    int sum=0,sum2=0;
    scanf("%d",&n);
    char arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
        else 
        {
            sum2=sum2+arr[i];
        }
        }
        printf("sum of even elements is %d",sum);
        printf("\n");
        printf("sum of oddd elements is %d",sum2);
        return 0;}