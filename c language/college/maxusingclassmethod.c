// #include <stdio.h>
// int main(){
// printf("enter the three numbers\n");
//     int n1,n2,n3;
//     scanf("%d%d%d",&n1,&n2,&n3);
//     int max=n1;
//     if(n2>max)
//     max=n2;
//     if(n3>max)
//     max=n3;
//     printf("the max of three numbers is %d",max);
//     return 0;}

#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the three numberes ");
    scanf("%d%d%d",&n1,&n2,&n3);
    int max=0;
    max=n1;
    max=n2>max?n2:max;
    max=n3>max?n3:max;
    printf("the max of three numbers is:%d",max);
    return 0;}