#include<stdio.h>
struct student{
    char name[100],sec[20];
    int rollno;
};
int main(){
    int n,i;
    printf("enter the number of students");
    scanf("%d",&n);
    getchar();
    struct student s[n];

    for(i=0;i<n;i++){
        printf("enter the name of student %d",i+1);

                   fgets(s[i].name,100,stdin);
    printf("enter the section of student %d",i+1);

    fgets(s[i].sec,20,stdin);
   printf("enter the roll no. of student %d",i+1);
    scanf("%d",&s[i].rollno);  
      getchar();}
    
    for(i=0;i<n;i++){
        printf(" the details of student %d is",i+1);
    puts(s[i].name);
    puts(s[i].sec);
    printf("%d",s[i].rollno);}
    return 0;
}