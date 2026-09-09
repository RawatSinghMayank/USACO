#include <iostream>
int main(){
    //HHHHAAARRRRRDDDD WWWWWOOORRRRKKK
    // int n;
    // std::cin>>n;
    // int ss;
    // ss=n-1;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     if(i==1){
    //         for(int j=1;j<=n;j++){
    //             std::cout<<"*";}
    //             std::cout<<std::endl;}
    //             if(i!=1){
    //                 for(int k=1;k<=a;k++){
    //                 std::cout<<" ";}
    //                 a++;
    //                 for(int l=1;l<=ss;l++)
    //                 {
    //                     std::cout<<"*";}
    //                     ss--;
    // std::cout<<std::endl;}
    // }return 0;}
    //SMART WORK
      int n;
    std::cin>>n;
    int nos=0;
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nos;j++){
            std::cout<<" ";}
            for(int k=1;k<=nst;k++){
                std::cout<<"*";}
                std::cout<<std::endl;
                nos++;
                nst--;
                }return 0;}