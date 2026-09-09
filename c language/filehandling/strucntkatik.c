#include<stdio.h>
#include<stdlib.h>
// struct student {
//     int rollno;
//     char name[1000];
//     };
//     int main(){
//         struct student e;
//     FILE *ptr;
//     ptr=fopen("g.txt","wb+");
//     if(ptr==NULL)
//     {
//         exit(1);
//     }
//     printf("Enter the rollno of the student:");
//     scanf("%d",&e.rollno);
//     getchar();
//     printf("Enter the name of the student:");
//     gets(e.name);
//     fwrite(&e,sizeof(e),1,ptr);
//     rewind(ptr);
// struct student r;
// fread(&r,sizeof(r),1,ptr);
// printf("Name: ");
// puts(r.name);
// printf("rollno :%d",r.rollno);

//     fclose(ptr);

//     return 0;}

int main(){
FILE *ptr;
ptr=fopen("g.txt","rb");
int arr[5];
if(ptr==NULL)
exit(1);
fread(arr,sizeof(int),5,ptr);
for(int i=0;i<5;i++)
printf("%d",arr[i]);
fclose(ptr);
return 0;}