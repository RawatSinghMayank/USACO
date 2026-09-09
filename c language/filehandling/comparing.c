
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr;
    ptr=fopen("g.txt","r");
    if(ptr==NULL){
        printf("no");
        exit(1);
    }
     int n1;
    printf("enter the number \n ");
    scanf("%d",&n1);
    int n2;
    fscanf(ptr,"%d",&n2);
    
    if(n1==n2){
        printf("no are equal ");
    }
    else printf("no are not equal ");
    fclose(ptr);
    return 0;}