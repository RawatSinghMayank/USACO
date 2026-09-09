#include <iostream>
class complex;

class calculator{
public:
  int  sumrealpart(complex ,complex);
int sumcomppart(complex,complex);
  
};

class complex{
  friend class calculator;
  // friend int calculator::sumrealpart(complex ,complex);
  // friend int calculator::sumcomppart(complex, complex);
  int a,b;
  public:
  void setdata(int x,int y){
    a=x;
    b=y;
  }
  void printdata(){
    std::cout<<"the required complex number is "<<a<<"+"<<b<<"i"<<std::endl;
  }
};

int calculator:: sumrealpart(complex o1,complex o2){
    return (o1.a+o2.a);
  }
  int calculator::sumcomppart(complex o3,complex o4){
    return (o3.b+o4.b);}

int main(){
  complex mayank,pankaj;
  mayank.setdata(5,6);
  mayank.printdata();
  pankaj.setdata(6,10);
  pankaj.printdata();
  calculator swati;
  int result=swati.sumrealpart(mayank,pankaj);
  int result2=swati.sumcomppart(mayank,pankaj);
  std::cout<<"the sum of real part is"<<result<<std::endl<<result2;
  return 0;}
 