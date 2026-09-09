#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char *ptr=(char *)malloc(n*sizeof(char));
    fflush(stdin);
    gets(ptr);
    int c=0;
    int i=0;
    while(*(ptr+i)!='\0'){
        if(*(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u' )
        c++;
    i++;
    }
    printf("%d",c);
}