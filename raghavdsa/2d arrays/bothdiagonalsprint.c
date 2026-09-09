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
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j || i+j==m-1)
        printf("%d",arr[i][j]);
        else printf(" ");
    }printf("\n");
}

}