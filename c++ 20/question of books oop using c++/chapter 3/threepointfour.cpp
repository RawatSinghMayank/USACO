#include <iostream>
#include <cmath>
int main(){
    int y1=0;
      double p[]={ 1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
      double r[]={0.10,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20};
      int n[]={1,2,3,4,5,6,7,8,9,10};
      double v=0;
      for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){ 
        
            for(int k=0;k<=9;k++){
                v=(p[i]*(pow( 1+r[j],n[k])));
                  std::cout<<v<<std::endl;
                y1++;
            }
   
           }}
            std::cout<<"+++++++++++++++++"<<std::endl;
            std::cout<<y1;}
