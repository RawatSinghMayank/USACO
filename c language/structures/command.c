#include<stdio.h>
int main(int argc,char *argv[]){
    printf("Enter the vcalue ");
    for(int i=0;i<argc;i++){
        printf("%s ",argv[i]);
    }
}