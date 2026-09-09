#include <iostream>
 class shop{
    private :
    int item[10];
    int price[10];
    int counter;
      void getprice(void);
    public:
    void count(void);
    
    void display(void);
 };
 void shop::count(void){
    counter=0;}
void shop::getprice(void){
 
    for(int i=1;i<=10;i++){
        std::cout<<"enter id  and price of item "<<i<<std::endl; 
std::cin>>item[i];
   std::cin>>price[i]; }}
   void shop::display(void){getprice();
    for(int i=1;i<=10;i++){
    std::cout<<"the id and price of item " <<item[i]<<std::endl<<price[i]<<std::endl;
   }}
   int main(){
    shop mayank;
    //mayank.getprice();
    mayank.count();
    mayank.display();
    return 0;}