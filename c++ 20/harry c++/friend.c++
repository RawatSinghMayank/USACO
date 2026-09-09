#include <iostream>
class swap2;
class swap1 {
    friend void swapboth(swap1 & ,swap2 &);
    int a1;
    public:
    void lol(int x1){
        a1=x1;
    }
void display(){
    std::cout<<a1<<std::endl;}
};
class swap2{ friend void swapboth(swap1 &,swap2 &);
    int a2;
    public: 
    void lol2(int x2){
        a2=x2;
    }
    void display(){
        std::cout<<a2<<std::endl;}
};
void swapboth(swap1 & o1,swap2 & o2){
    int temp=o1.a1;
    o1.a1=o2.a2;
    o2.a2=temp;
}
int main(){
    swap1 mayank;
    swap2 pankaj;
    mayank.lol(34);
    pankaj.lol2(44);
    std::cout<<"before swapping"<<std::endl;
    mayank.display();
    pankaj.display();
   swapboth(mayank,pankaj);
   mayank.display();
   pankaj.display();

return 0;}



