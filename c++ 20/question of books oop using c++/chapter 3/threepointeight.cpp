#include <iostream>
#include <cmath>
int main(){
  long double y=0.0l;
  double x[]={0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
  double z[]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9};
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){

    y=std::exp((-(z[j]+i)));
    std::cout<<y<<std::endl;
  }std::cout<<"|||||||||"<<std::endl;}
  return 0;
}