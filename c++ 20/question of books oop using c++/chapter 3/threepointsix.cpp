#include <iostream>
#include <iomanip>
int main(){
    int runs1,runs2,runs3;
    int innings1,innings2,innings3;
    int tno1,tno2,tno3;
    std::string name1,name2,name3;
    double avg1=0,avg2=0,avg3=0;
    
    std::cout<<"Enter first batsman name,runs ,innings ,times not out"<<std::endl;
    std::cin>>name1>>runs1>>innings1>>tno1;
    std::cout<<"Enter second batsman name, runs ,innings,times not out"<<std::endl;
    std::cin>>name2>>runs2>>innings2>>tno2;
    std::cout<<"Enter third batsman name,runs,innings,times not out"<<std::endl;
    std::cin>>name3>>runs3>>innings3>>tno3;
avg1=(runs1)/(innings1-18);
avg2=(runs2)/(innings2-9);
avg3=(runs3)/(innings3-11);
int a = 17;
int b= 24;
std::cout<<"Player's name"<<std::setw(a)<<"Runs"<<std::setw(a+8)<<"Innings"<<std::setw(a+14)<<"Times not out"<<std::setw(a+12)<<"Batting Average"<<std::endl;
std::cout<<name1<<std::setw(b)<<runs1<<std::setw(b)<<innings1<<std::setw(b)<<tno1<<std::setw(b)<<avg1<<std::endl;
std::cout<<name2<<std::setw(b)<<runs2<<std::setw(b)<<innings2<<std::setw(b)<<tno2<<std::setw(b)<<avg2<<std::endl;
std::cout<<name3<<std::setw(b+1)<<runs3<<std::setw(b)<<innings3<<std::setw(b)<<tno3<<std::setw(b)<<avg3<<std::endl;
return 0;}