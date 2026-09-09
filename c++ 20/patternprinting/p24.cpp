#include <iostream>
int main(){
    int n;
    std::cin>>n;
int a=n-1; int o=1; int q=n-1;  for(int i=1;i<=n;i++){
        std::cout<<i;}
        for(int j=n-1;j>=1;j--){
            std::cout<<j;}
            std::cout<<std::endl;
            for(int k=1;k<=n-1;k++){
                for(int l=1;l<=a;l++){
                    std::cout<<l;}
                    a--;
                    for(int m=1;m<=o;m++){
                        std::cout<<" ";}
                        o=o+2;
                        for(int p=q;p>=1;p--){
                            std::cout<<p;}q--;
                            std::cout<<std::endl;}
                            return 0;}
