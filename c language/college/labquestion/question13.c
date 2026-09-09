#include <stdio.h>
int main(){
    printf("Enter the number of elements in the array:");
    int n; 
    int c1=0,c2=0,c3=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of constant K:");
    int n1;
    scanf("%d",&n1);
    for(int i=0;i<n;i++){
        if(arr[i]>n1){
            c1++;
        }
     else if (arr[i]<n1){
        c2++;
     }
     else { c3++;
     }
    }
    printf("Number of elements greater than K are:%d\n",c1);
    printf("Number of elements less than K are:%d\n",c2);
    printf("Number of elements equal to K are:%d",c3);
    return 0;}
