 #include <stdio.h>
 int power(int m,int n){
  if(n==0){
    return 1;
  }
  else {
    return m*power(m,n-1);
  }
 }
 int main(){
  printf("enter the value of m and n\n");
  int m,n;
  scanf("%d%d",&m,&n);
  printf("%d",power(m,n));
  return 0;}
