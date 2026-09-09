#include<stdio.h>
int check(int m,int n,int arr[][n]){
printf("Enter the no to be searched ");
int x;
scanf("%d",&x);
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    if(arr[i][j]==x){
        return 1;}
}
}
return 0;}





int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
 
  if(check(m,n,arr))
  printf("no is present");
  else printf("no is not present ");
  
    return 0;}
