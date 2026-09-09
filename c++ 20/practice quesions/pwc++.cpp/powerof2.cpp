#include <iostream>
#include<cmath>
int main(){
    float n;
    std::cin>>n;
    float a=1;
float r=1;
    for(float i=1;i<=a;i++){
        r=r*2;
        a++;
        if(r<n){
            continue;}
            if(r==n){
                float x=pow(2,i);
                if(r==x){
                std::cout<<"yes";
                break;}
                else {std::cout<<"no";}

                }
                if(r>n){
                std::cout<<"no";
                break;}
        
                }

return 0;}