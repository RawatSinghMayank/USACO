#include <stdio.h>
int main(){

    printf("enter no of rows and columns  \n");
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    int maxr=m-1;
    int minr=0;
    int maxc=n-1;
    int minc=0;
    int count=0;
    int nof=m*n;
    int x=1;

    while(count<nof){
        
        for(int j=minc;j<=maxc && count<nof ;j++){
           arr[minr][j]=x++;
            count++;
        }

        minr++;
        for(int i=minr;i<=maxr && count<nof;i++){
          arr[i][maxc]=x++;
            count++;
        }maxc--;
        for(int j=maxc;j>=minc && count<<nof;j--){
        arr[maxr][j]=x++;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<<nof;i--){
            arr[i][minc]=x++;
            count++;
        }
        minc++;
    
    
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
}printf("\n");
}
return 0;}