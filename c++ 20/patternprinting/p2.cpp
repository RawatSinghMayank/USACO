
#include <iostream>
int main(){
int n;
int a;
std::cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=a;j++){

    //  if(j%2==!0){       std::cout<<j;}

    //     }std::cout<<std::endl;
    //     a=a+2;
    // }  OR
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=1;j<=i;j++){
            std::cout<<a;
          a=a+2;
        }
        std::cout<<std::endl;
    }
}