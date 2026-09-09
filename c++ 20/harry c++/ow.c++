#include <iostream>
class complex;
class calculator{
 
    int c;
    public:

    void addrealpart(complex ,complex);
    
    void addcomplexpart(complex,complex);
     
    
    };

class complex {
friend void calculator::addrealpart(complex ,complex );
friend void calculator::addcomplexpart(complex,complex );
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void printdata(){
        std::cout<<"the value of complex numbers are"<<a<<"+"<<b<<"i"<<std::endl;
    }
};
void calculator::addrealpart(complex o1,complex o2){
        std::cout<<"the sum of real part is :" <<(o1.a+o2.a);
        std::cout<<std::endl;
    }
    void calculator::addcomplexpart(complex o3,complex o4){
        std::cout<<"the sum of complex part is :"<<(o3.b+o4.b);
        std::cout<<std::endl;
    }

int main(){
    complex mayank,pankaj;
    calculator calc,calc1,calc2;
    mayank.setdata(4,5);
    mayank.printdata();
    pankaj.setdata(6,7);
    pankaj.printdata();
    calc.addrealpart(mayank,pankaj);
    calc.addcomplexpart(mayank,pankaj);
    return 0;}

