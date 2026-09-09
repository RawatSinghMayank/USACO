#include  <stdio.h>
int main(){
    printf("entering first array enter m and n\n");
    int m;int n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
printf("enter the elements");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("printing arrray\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
}
 int m1;int n1;
    scanf("%d%d",&m1,&n1);
    int arr1[m1][n1];
printf("enter the elements");
for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        scanf("%d",&arr1[i][j]);
    }
}
printf("\n");
printf("printing arrray\n");
for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        printf("%d ",arr1[i][j]);
    }printf("\n");
} int c[m][n];
if(m==m1 && n==n1){
printf("adding arrays\n ");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
c[i][j]=arr[i][j]+arr1[i][j];
    }
}
printf("new array\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
printf("%d ",c[i][j]);
    }printf("\n");
}}

return 0;}
