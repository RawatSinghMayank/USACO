#include <iostream>
class  y;
class x{
    int data;
    public:
    void set(int one){
        data=one;
    }
    friend int  add(x,y);
};
class y{
    int data2;
    public:
    void set(int two){
        data2=two;
    } friend int add(x,y);
};
int add(x o1, y o2){
    return (o1.data+o2.data2);
}
int main(){
    x mayank;y pankaj;
    mayank.set(5);
    pankaj.set(19);
    std::cout<<add(mayank,pankaj);
    return 0;}