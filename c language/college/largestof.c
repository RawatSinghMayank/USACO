#include <stdio.h>
int main(){
    printf("enter  total number of numbers to be entered \n");
    int n;
    scanf("%d",&n);
    int arr[n];
 
    int realmax=0;
    printf("enter the numbers\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
       
    } int max=arr[0];
    printf("the largest of entered numbers is :\n");
    for(int j=1;j<n;j++){
        if(max>arr[j]){
            
 realmax=max;
        }
        else {
            realmax=arr[j];
        }
    }
    printf("%d",realmax);
    return 0;}