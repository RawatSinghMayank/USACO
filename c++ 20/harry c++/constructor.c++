#include <iostream>
class complex {
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void printdata(){
        std::cout<<"the required complex number is"<<a<<"+"<<b<<"i"<<std::endl;
    }
    complex();
};
complex::complex(){
a=0;
b=0;
std::cout<<"hello world"                                                                        ;
}
int main(){
    complex swati;


    swati.printdata();
    }