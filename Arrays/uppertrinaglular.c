#include <stdio.h>
int main(){
    printf("enter m and n");
    int m ,n;
scanf("%d%d",&m,&n);
int arr[m][n];
printf("enter the elements");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
}
}
printf("printing\n");

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%d",arr[i][j]);
}printf("\n");
}
int b=0;
for(int i=0;i<m-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j][i]!=0){
    b++;}
    }
}
if(b>0){
    printf("not a upper traingular matrix");
}
else { printf("upper t marx");
}
}