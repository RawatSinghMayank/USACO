#include <iostream>
class employee{
    
    int eid;
    public:
    void getdata(void){
        std::cout<<" enter id  "<<std::endl;
std::cin>>eid;
    }
    void print(void){
        std::cout<<" the id is   " <<eid<<std::endl;
    }};
    int main(){
        employee mayank[10];
        
for(int i=0;i<10;i++){
   
  mayank[i].getdata();
mayank[i].print();
}
return 0;}