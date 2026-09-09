#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("enter x");
    int x; int c=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==(*(ptr+i))){
        c++;
        break;}}
        if(c)printf("yes");
        else printf("no");
}
    
     