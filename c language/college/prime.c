 #include <stdio.h>
 int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;}}
            if(c==2){
                printf("the number is prime");
                }else {printf("the number is not prime");
                }
                return 0;
    }