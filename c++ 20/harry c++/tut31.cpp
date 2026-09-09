#include <iostream>
class complex {
    int a,b;
    public:
    complex(){
    a=0;
    b=0;
    }
    complex (int x){
        a=x;
        b=5;
    }
    complex (int x,int y ){
        a=x;
        b=y;
    }
    void print(void){
        std::cout<<a<<"+"<<b<<"i"<<std::endl;
    }
};
int main(){
    complex c1;
    c1.print();
    complex c2(5);
    c2.print();
    complex c3(5,5);
    c3.print();
    return 0;}