#include <iostream>
int main(){
  int a1=0,a2=1;
  std::cout<<"Enter the no of terms"<<std::endl;
  int n;
  int sum=0;
  std::cin>>n;
  std::cout<<"required fibo series is:"<<a1<<","<<a2;
  for(int i=1;i<=n-2;i++){
 sum=a1+a2;
 std::cout<<","<<sum;
 a1=a2;
 a2=sum;
  }return 0;}
