#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last,mid,first;
    last=num%10;
    mid=num/10; 
    int mid1=mid%10;
    first=mid/10;

    int sum= (first*first)+(mid1*mid1)+(last*last);
    printf("%d",sum);
return 0;}
