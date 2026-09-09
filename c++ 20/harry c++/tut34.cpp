#include <iostream>
class Number {
    int a;
    public:
    Number(){}
    Number(int n){
        a=n;
    } 
    // Number(Number &mayank){
    //     std::cout<<"copy constructor called"<<std::endl;
    //     a=mayank.a;
    // }

void display(void){
    std::cout<<"number is:"<<a;
}
};
int main(){
    Number one(2),two(9),three(two);
    one.display();
    two.display();
    three.display();
    return 0;}