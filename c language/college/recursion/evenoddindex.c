#include <stdio.h>
int main(){
    printf("enter the elements \n");
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum1=sum1+arr[i];
        }
        else { sum2=sum2+arr[i];
        }
    }
    printf("the sum of even index elemetns is %d\n",sum1);
    printf("the sum of odd order elements is %d",sum2);
    return 0;}
