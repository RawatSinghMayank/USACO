#include <iostream>

 class employee {
   static double count;
    int id;
    public :
    void getdata(void){
        std::cout<<"enter the employee id"<<std::endl;
        std::cin>>id;
count++;
    }
    void printdata(void){
        std::cout<<" this is employee number  "<<count<<std::endl<<"And his id is "<<id<<std::endl;
    }
static void cou(void){
    std::cout<<"the vlaue of count is"<<count<<std::endl;}

 } pankaj,swati,mayank;
 double employee::count;
int main(){

    mayank.getdata();
    mayank.printdata();
    employee::cou();
    pankaj.getdata();
    pankaj.printdata();
    employee::cou();
    swati.getdata();
    swati.printdata();
    employee::cou();
    return 0;  }
