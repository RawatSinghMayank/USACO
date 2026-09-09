#include <iostream>
class complex {
int a,b;
friend complex bothadd(complex first, complex second);
public:
void getdata(int x,int y){
    a=x;
    b=y;
}

void printf(void){
    std::cout<<"the value of required complex numbers are:"<<a<<" + "<<b<<"i"<<std::endl;
}
};
complex bothadd(complex first,complex second){
       complex fu;
fu.getdata((first.a+second.a),(first.b+second.b));
  return fu;  
}
int main(){
    complex f,u,di;
  
    


    f.getdata(3,3);
    f.printf();
    u.getdata(9,9);
    u.printf();
di=bothadd(f,u);
    di.printf();
    return 0;}