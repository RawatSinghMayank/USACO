#include <iostream>

class mayank {
    int a,b;
    public :
    void getcomplex1 ( int x1,int y1){
        a=x1;
       b=y1;
    }
    void getcomplex2(mayank x2,mayank y2){
        a=x2.a+ y2.a;
        b=x2.b+ y2.b;
    }
    void print(){
    std::cout<<"the complex numbers are : "<<a<<"+"<<b<<"i"<<std::endl;
    }};
    int main(){
        mayank c1,c2,c3;
        c1.getcomplex1(2,3);
        c1.print();
        c2.getcomplex1(3,2);
        c2.print();
        c3.getcomplex2(c1,c2);
        c3.print();
        return 0;}