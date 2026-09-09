#include <iostream>
#include <cmath>
#define PI =3.14
int main(){
     double sum=0;
    double degree;
    
    double num=0,den=1;
  int i=1;
  int a=1;
  int x=1,y=1,z=1;
  double term=0;
    std::cout<<"Enter angle in degree"<<std::endl;
    std::cin>>degree;
    num=((3.14)*degree)/180;
do{
while(a<=x){
    den=den*a;
    a++;

}
if(z%2==0){
    
y=-1;
}else{ y=1;
}
term=y*((std::pow(num,x))/den);
x=x+2;
sum=sum+term;
z++;
}while(term>=0.00001);
std::cout<<"value  of sine(x) series by taylor formula is:"<<sum<<std::endl;
std::cout<<"value of sine(x) series by library function is:"<<sin(num);
return 0;}

		