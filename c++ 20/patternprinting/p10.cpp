#include <iostream>
int main(){
    int n;
    int a;
    std::cin>>n;
    // for(int i=1;i<=n;i++){
    //      if(i%2!=0)
    //             a=1;
    //             else a=0;
    //     for(int j=1;j<=i;j++){
            
    //             std::cout<<a<<" ";
    //             if(a==0)
    //             a=1;
    //             else a=0;


    //     } std::cout<<std::endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                std::cout<<"1"<<" ";}
                else{ std::cout<<"0"<<" ";
            }
    }std::cout<<std::endl;}return 0;}