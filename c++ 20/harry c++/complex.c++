#include <iostream>
class complex{
    friend complex add(complex o1,complex o2);
    int a,b;
    public:
    void setnumber(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        std::cout<<a<<"+"<<b<<"i"<<std::endl;
    }
};
complex add(complex o1,complex o2){
    complex sum;
    sum.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return sum; 
}
int main(){
    complex a1,a2,a3;
    a1.setnumber(0,9);
    a1.print();
    a2.setnumber(9,0);
    a2.print();
    a3=add(a1,a2);
    a3.print(); 
    return 0;}