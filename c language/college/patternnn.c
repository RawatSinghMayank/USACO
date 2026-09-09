#include <stdio.h>
int main(){
int n,n1;
int x=1;
int new=0;
printf("enter the number");
scanf("%d",&n);
int num=n;
while(n!=0){
    n1=n%10;
    n=n/10;
    new=new*10+n1;

}
if(new==num){
    printf("the number is palindrome");
}
else { printf("the number is not palindrome");
}
return 0;
}

