#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int min;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i>j){
             min=j;
        }else{ min=i;}
std::cout<<min;}std::cout<<std::endl;}
}