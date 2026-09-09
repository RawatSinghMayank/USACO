#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
        bool flag = false;
        for(int j=i+1; j<n;j++){
            if(a[i]==a[j]){
                flag=true;
                a[j]=-1;
            }
        }
        if(flag==false) {
            printf("%d is unique value",a[i]);
        break;}}}
}