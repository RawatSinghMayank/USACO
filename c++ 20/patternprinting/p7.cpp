#include <iostream>
int main(){
    int m;
    int n;
    std::cout<<"enter no of rows"<<std::endl;
    std::cout<<"enter no of columns "<<std::endl;

    std::cin>>m;
    std::cin>>n;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++){
    //        if(i==1 || i==m){
    //         std::cout<<"*";
    //        }
    //        else{
    //         if(j==1 || j==n) {
    //             std::cout<<"*";
    //         }
    //         else {
    //             std::cout<<" ";}}}std::cout<<std::endl;}
    //             return 0;}

    //OOOORRRRRR

for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
        if(i==1 || i==m || j==1 || j==n){
            std::cout<<"*";}
            else {std::cout<<" ";}

      }std::cout<<"\n";}
      return 0;}