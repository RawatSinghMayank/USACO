#include <stdio.h>
int IsPrime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
}
if(c==2){
    return 1;
}
else {
    return 0;
}
}
int main(){
    printf("Enter the number:");
    int n;
    scanf("%d",&n);
    printf("%d",IsPrime(n));
return 0;}