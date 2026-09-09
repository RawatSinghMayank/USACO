// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *ptr;
//     ptr=fopen("mayank.txt","r");
//     if(ptr==NULL){
//         printf("file not found ");
//         exit(1);
        
//     }
//     int n;
//     fscanf(ptr,"%d",&n);
//     printf("number is %d",n);
//     fclose(ptr);
// return 0;}


#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*ptr;
    ptr=fopen("g.txt","r");
    if(ptr==NULL){
        printf("no");
        exit(1);
    }
    int n;
    fscanf(ptr,"%d",&n);
    printf("no is %d",n);
    fclose(ptr);
}