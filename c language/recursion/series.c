#include <stdio.h>
#include <math.h>
int series(int  n){
if(n==0){
    return 0;}
    else 
    {
        return pow(n,n)+series(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",series(n));
    return 0;}