#include<iostream>
int main(){
 int n;
 int a=1;
 int x=1;
 std::cin >>n;
 for(int i=1;i<=n;i++){
    if(i%2==!0){
for(int j=1;j<=a;j++){
std::cout<<j;
}std::cout<<std::endl;
a=a+2;
    }
    if(i%2==0){
        for(char c=65;c<=x+65;c++){
            std::cout<<c;

        }
        std::cout<<std::endl;
        x=x+2;}
 }
 return 0;}