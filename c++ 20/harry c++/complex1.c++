#include <iostream>
class complex {
   int a,b;
   public:
   void setdata(int x,int y){
      a=x;
      b=y;
   }
   void print(){
      std::cout<<a<<"+"<<b<<"i"<<std::endl;
   }
   friend complex sumcomplex (complex o1,complex o2);
};
complex sumcomplex(complex o1,complex o2){

   complex o3;
   o3.setdata((o1.a+o2.a),(o1.b+o2.b));
   return o3;}
int main(){
   complex a,b,c;
   a.setdata(3,4);
   a.print();
   b.setdata(4,5);
   b.print();
c=sumcomplex(a,b);
c.print();
return 0;}