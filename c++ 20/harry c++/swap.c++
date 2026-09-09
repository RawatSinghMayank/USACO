#include <iostream>
class swap2;
class swap1{
    friend void swaplool(swap1 & ,swap2 &);
    int a;
    public:
    void swap3(int b){
        a=b;
    }
    void print(){
        std::cout<<a<<std::endl;
    }
};
class swap2{
    int c;
    friend void swaplool(swap1 &,swap2 &);
    public:
    void swap4(int d){
        c=d;
    }
    void print1(){
        std::cout<<c<<std::endl;
    }
};
void swaplool(swap1 &oc,swap2 &oc1){
int temp=oc.a;
oc.a=oc1.c;
oc1.c=temp;
}
int main(){
    swap1 mayank;
    swap2 pankaj;
std::cout<<"before swapping"<<std::endl;
mayank.swap3(55);
mayank.print();
pankaj.swap4(64);
pankaj.print1();
std::cout<<"after swapping"<<std::endl;
 swaplool(mayank,pankaj);
mayank.print();
pankaj.print1();
return 0;}
