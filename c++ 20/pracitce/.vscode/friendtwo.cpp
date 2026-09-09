// #include <iostream>
// class complex {
//     private:
//     int a,b;
//     public:
//     void setnumber(int n1,int n2){
//         a=n1;
//         b=n2;
//     }
//     void print(){
//         std::cout<< "complex  number is "<<a<<" + "<<b<<" i "<<std::endl;
//     }
//     friend complex sumcomplex (complex o1,complex o2);
//      };
//      complex sumcomplex(complex o1, complex o2){
//  complex f;

//  f.setnumber((o1.a+o2.a),(o1.b+o2.b));
//  return f;
//      };
//      int main(){
//         complex c1,c2,sum;
//             c1.setnumber(1,4);
//             c1.print();
//             c2.setnumber(5,6);;
//             c2.print();
//             sum=sumcomplex(c1,c2);
//             sum.print();
//             return 0;
//             }
#include <stdio.h>
int main(){
    // int x=4;
    // int y=6;
    // int z=x++ + ++x + y-- + --y;
    // printf("%d",z);
    // return 0;

int a=1,b=3;
a=(++a) + (--b)  + (a--);
//b=(b++) + (--a) + (++b);
printf("%d %d ",a,b);
return 0;}