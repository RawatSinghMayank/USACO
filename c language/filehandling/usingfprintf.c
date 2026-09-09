#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("number.txt","w");
    if(ptr==NULL){
        printf("file not found ");
        exit(1);
    }
    printf("enter name\n");
    char name[1000];
    fgets(name,100,stdin);
    printf("enter salary ");
    int n;
    scanf("%d",&n);
    fprintf(ptr,"Name is : %s :",name);
    fprintf(ptr,"\n salary is : %d",n);
    fclose(ptr);
    return 0;}