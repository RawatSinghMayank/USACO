#include <iostream>

class complex{
    private:
    int a,b;
    friend int calculator::sumrealcomplex(complex first,complex second);
    public :
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    void print(void){
        std::cout<<"the required complex no is "<<a<<" + "<<b<<"i"<<std::endl;
    }
};
class calculator {
    public:
    int sum(int a1,int b1){
        return (a1+b1);
    }
    int sumrealcomplex(complex first,complex second){
        return (first.a+second.b);
    }
};
int main(){

