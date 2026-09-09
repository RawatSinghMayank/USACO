#include <stdio.h>
int main(){
    double s1,s2,s3,s4;
    double total;
    double per;
    scanf("%lf %lf %lf %lf %lf",&s1,&s2,&s3,&s4,&total);
    per=((s1+s2+s3+s4)/total)*100;
    printf("%lf",per);
return 0;}