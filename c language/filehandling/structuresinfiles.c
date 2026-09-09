#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    char name[100];
    int rollno;
    char sec[100];
}student;
int main(){
//     student mayank[3];
//     FILE *ptr;
//     ptr=fopen("g.txt","wb");
//     if(ptr==NULL)
//     exit(1);
//     for(int i=0;i<3;i++){
// printf("enter name , rollno ,sec of student \n");
// fgets(mayank[i].name,100,stdin);
// scanf("%d",&mayank[i].rollno);
// getchar();
// fgets(mayank[i].sec,100,stdin);
//     }
//  fwrite(&mayank,sizeof(struct student),3,ptr);
//  fclose(ptr);
//  return 0;}
student mayank[3];
FILE*ptr;
ptr=fopen("g.txt","rb");
    if(ptr==NULL)
    exit(1);
 fread(&mayank,sizeof(struct student),3,ptr);
 for(int i=0;i<3;i++){
 printf("\n%s",mayank[i].name);
 printf("%d\n",mayank[i].rollno);
 printf("\n%s",mayank[i].sec);

 }
 fclose(ptr);
 return 0;}