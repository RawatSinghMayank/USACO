#include <stdio.h>
int main(){
    printf("Enter the value of n\n");
    int n;
    scanf("%d",&n);
    
for(int i=1;i<=n;i++){
    for(int j=2;j<=i;j++){
        printf("   ");
    }
    for(int k=i;k<=n;k++){
        printf(" * ");
    }
    for(int l=i;l<=n-1;l++){
        printf(" * ");
    }printf("\n");
    }
}