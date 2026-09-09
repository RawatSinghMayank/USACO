#include <stdio.h>
int main(){
    printf("enter no of rows and columns \n");
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("enter elemenets");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }
for(int i=0;i<n;i++){
    if(i%2!=0){
        for(int j=0;j<n;j++){
            printf(" %d ",arr[j][i]);
        } }
        else {
            
        for(int j=m-1;j>=0;j--){
            printf(" %d ",arr[j][i]);
        }
    }}
    return 0;}