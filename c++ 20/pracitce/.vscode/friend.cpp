#include <iostream>
class complex {
   
public:
int a,b;
friend complex sum(int x1,int x2);
friend complex print(void);
  friend complex  sum2(complex o1,complex o2);
  
   
};
complex sum(int x1,int x2){
  

int a=x1;
int b=x2;}

 complex print(void){

int a,b;
complex sum();
    std::cout<<"the value of complex number is:"<<a<<" + "<<b<<"i"<<std::endl;
  }


    complex sum2(complex o1,complex o2){
       
       int summmm=((o1.a+o2.a),(o1.b+o2.b));
      
      
    }
 
int main(){
    complex  c1,c2,c3;
    c1=sum(2,4);
    print();
    c2=sum(4,2);
    print();
    c3=sum2(c1,c2);
    print();
    return 0;}

