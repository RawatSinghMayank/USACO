// #include <iostream>
// class complex {
//     int a,b;
//     public:
//     complex(int ,int );    

//     void setdata(int x,int y){
//         a=x;
//         b=y;
//   }
//     void printdata(){
//         std::cout<<a<<"+"<<b<<"i"<<std::endl;
//     }
// };
// complex::complex(int x1,int y1){
//     a=x1;
//     b=y1;
// }

// int main(){
    
//     complex swati(10,10);
//     swati.printdata();
//     complex a=complex(20,30);
//     a.printdata();
//     return 0;}
// #include <iostream>
// class point{
//     int a,b;
//     public:
//     point(int ,int);
//     void printdata(void){
//         std::cout<<"the point in 2D axis is "<<"("<<a<<","<<b<<")"<<std::endl;      
//     }
// };
//     point::point(int x,int y){
//         a=x;
//         b=y;
//     }
// int main(){
//     point mayank(4,5);
//  mayank.printdata();
//  return 0;}
// #include <iostream>
// class point{
//     int a,b;
//     public:
//     point(int x,int y){
//         a=x;
//         b=y;
//     }
//     void print(void){
//         std::cout<<a<<b;
//     }
// };
// int main(){
//     point ma(34,63);
//     ma.print();
// }
#include <iostream>
#include <cmath>
class point{
    int a,b;
    double distance=0;
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void printpoint(){
        std::cout<<"the points is 2D is :"<<"("<<a<<","<<b<<")"<<std::endl;
    }
    point(point o1,point o2){

        distance=sqrt(pow((o1.a-o2.a),2)+ pow((o1.b - o2.b),2));
    std::cout<<"the distance between points is "<<distance<<std::endl;
    }
        
};

int main(){
    point mayank(1,0);
    mayank.printpoint();
    point pankaj(70,0);
    pankaj.printpoint();
    point swati(mayank,pankaj);
    return 0;}

 


