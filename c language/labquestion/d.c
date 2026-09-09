#include <stdio.h>
int Perfectnumber(int m,int  n);
int main(){
    int m,n;
    printf("Enter the value of m:");
    scanf("%d",&m);
    printf("Enter the value of n:");
     scanf("%d",&n);
  Perfectnumber(m,n);
 
    return 0;}
              
int Perfectnumber(int m,int  n){
    int sum=0;
        printf("Perfect numbers beteen m and n are:");
    for( int i=m;i<=n;i++){
        sum=0;
        for( int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            } }
            if(sum==i){
                printf("%d ",i);
            }
    }

}




