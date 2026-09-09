#include <stdio.h>
int main(){
    printf("Enter no of rows\n");
    int m;
scanf("%d",&m);
printf("Enter no of columns\n");
int n;
scanf("%d",&n);
int arr[m][n];
printf("Enter the elements\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("printing the elements\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int sum=0;
printf("Calculating sum of all the elements\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sum=sum+arr[i][j];
    }
}
printf("sum if %d",sum);
return 0;}
