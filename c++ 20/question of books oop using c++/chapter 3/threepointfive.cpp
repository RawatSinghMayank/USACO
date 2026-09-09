#include <iostream>
int main(){int count1=0,count2=0,count3=0,count4=0,count5=0,spoilballot=0; 
  std::cout<<"There are five candidates and they are numbered one to five:\n";
std::cout<<"vote according to your choice\n"; 
   std::cout<<"press 1 to vote candidate one\n";
  std::cout<<  "press 2 to vote candidate two\n"; 
   std::cout<< "press 3 to vote candidate three\n"; 
   std::cout<< "press 4 to vote candidate four\n"; 
   std::cout<<" press 5 to vote candidate five"<<std::endl; 
   
   std::cout<<"enter the no of candidates"<<std::endl;
   int n;
   std::cin>>n;
   for(int i=1;i<=n;i++){
std::cout<<"press  the candiate number of your choice"<<std::endl;    
    int ballot;
    std::cin>>ballot;
    if(ballot>=1 && ballot<=5){
if(ballot==1){
    
count1++;}
if(ballot==2){
    count2++;}
    if(ballot==3){count3++;}
    if(ballot==4){
        count4++;
    }
    if(ballot==5){count5++;}
    if(ballot <1 || ballot>5){
       
        spoilballot++;
    }}}
    std::cout<<"total no of votes assigned to candidate one is:"<<count1<<std::endl;
std::cout<<"total no of votes assigned to candidate two is:"<<count2<<std::endl;
std::cout<<"total no of votes assigned to candidate three is:"<<count3<<std::endl;
std::cout<<"total no of votes assigned to candidate four is:"<<count4<<std::endl;
std::cout<<"total no of votes assigned to candidate five iss:"<<count5<<std::endl;
if(spoilballot>=1){
    std::cout<<"you have spoiled the ballot bcz you have entered wrong choice"<<std::endl;
std::cout<<"total no of spoil ballots are:"<<spoilballot<<std::endl;}
return 0;}