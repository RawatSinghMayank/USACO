// #include<iostream>
// int main(){
//     std::cout<<"Enter the value of the number"<<std::endl;
//     int n;
//     int c=0;
//     std::cin>>n;
// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         c++;}
// }
// if(c==2){
//     std::cout<<"prime no"<<std::endl;
// }
// else{
//     std::cout<<"not a prime no"<<std::endl;
// }
// return 0;}
#include <iostream>
int main(){
    std::cout<<"Enter the number till which you wanted to print prime numbers"<<std::endl;
int c=0;    int n;
    std::cin>>n;
   for(int j=1;j<=n;j++){
    for(int i=1;i<=n;i++){
        if(n%i==0){
       c++;}
       if(c==2){
            std::cout<<n<<std::endl;}
    }}
    return 0;}
