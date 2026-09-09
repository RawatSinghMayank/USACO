#include <iostream>
#include <string>
int main(){
    std::cout<<"Enter the no of consumers"<<std::endl;
    int n;
    std::cin>>n;
    std::string name[n];
    double units[n];
    double charge=0;
    int min=50;
    std::cout<<"Enter the name of customers and units consumed by them"<<std::endl;
    for(int i=1;i<=n;i++){
        std::cin>>name[i];
        std::cin>>units[i];
    
  if(units>=0 && units<=100){
    charge = charge + (units*60)+min;
  }n
  if(units>100 && units<=300){
    charge =charge +((units-100)*80 +100*60) +min;
  }
  if(units>300 ){
    charge =charge + (100*60 + 200*80 + (units -300)*90 +min;
  }

std::cout<<"name of customer:"<<name[i]<<"units consumed"<<units[i]<<"charge to pay"<<charge;
}return 0;}