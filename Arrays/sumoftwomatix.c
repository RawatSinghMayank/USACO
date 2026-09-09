#include<stdio.h>
int main(){
    printf("enter m and n of array1");
    int m1,n1;
    scanf("%d%d",&m1,&n1);
    int arr1[m1][n1];
    printf("enter elements");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter m and n of array2");
    int m2,n2;
    scanf("%d%d",&m2,&n2);
    int arr2[m2][n2];
    printf("enter elements");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[m1][n1];
    if(m1==m2 && n1==n2){

for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){

arr3[i][j]=arr1[i][j]+arr2[i][j];}}

for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
}


    }
    else { 
        printf("additon not poss");
    }
    return 0;}