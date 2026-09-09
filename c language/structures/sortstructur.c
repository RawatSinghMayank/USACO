#include<stdio.h>
typedef struct students{
    char name[1000];
    char sec[100];
    int phy ,chem,maths,cs;
}students;
void sorty(students topg[],int n,float per[n]){
    students temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(per[i]>per[i+1]){
                temp=topg[i];
                topg[i]=topg[i+1];
                topg[i+1]=temp;
            }
        }
    }
    return ;}
int main(){
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    students mayank[n];
    for(int i=0;i<n;i++){
        printf("Enter name,sec,marks in phy,chem,maths\n");
        getchar();
        fgets(mayank[i].name,1000,stdin);
        fgets(mayank[i].sec,100,stdin);
        scanf("%d%d%d",&mayank[i].phy,&mayank[i].chem,&mayank[i].cs);
    }
    float per[n];
    for(int i=0;i<n;i++){
   per[i]=((float)(mayank[i].phy+mayank[i].chem+mayank[i].cs)/(float)(3*100))*100;}
    printf("Printing before sorting\n");
for(int i=0;i<n;i++){
  printf("Name is:");puts(mayank[i].name);

       printf("Section is:"); puts(mayank[i].sec);
        printf("Marks is :");printf("%d:%d:%d",mayank[i].phy,mayank[i].chem,mayank[i].cs);printf("\n");
        printf("\nTheir percentage is %lf:",per[i]);
        }
        printf("printing after sorting\n");
 sorty(mayank, n,per);
    printf("Printing after sorting\n");
for(int i=0;i<n;i++){
  printf("Name is:");puts(mayank[i].name);

       printf("Section is:"); puts(mayank[i].sec);
        printf("Marks is :");printf("%d:%d:%d",mayank[i].phy,mayank[i].chem,mayank[i].cs);printf("\n");}
        
return 0;}