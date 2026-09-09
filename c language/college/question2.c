#include <stdio.h>
int main(){
    int r1,r2;
    printf("Enter lower limit of range\n");
    scanf("%d",&r1);
    printf("Enter upper limit of range\n");
    scanf("%d",&r2);
    printf("Perfect numbers are:");
 for(int i=r1;i<=r2;i++){
    int num=0;
    for(int j=1;j<i;j++){
        if(i%j==0){
            num=num+j;
        }
    }
    if(num==i){
        printf("%d ",num);
    } 
 }
 return 0;}
 