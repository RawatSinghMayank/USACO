#include<stdio.h>
#include<string.h>
int main(){
typedef struct student{
    char name[1000];
    int id;
}mayank;
mayank e;
e.id=1000;
mayank *p=&e;
strcpy(e.name,"mayank");
printf("%s",e.name);
strcpy((*p).name,"jfsjd");
printf("%s",e.name);
// printf("%p\n",p);
// printf("%p\n",&e.id); 
return 0;}