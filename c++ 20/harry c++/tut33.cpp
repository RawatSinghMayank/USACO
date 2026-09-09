#include <iostream>
class Bankdeposit{
    int principal;
    float rate;
    int years;
    float interest=0;
    float returnvalue;
    public:
    
    void print(void){
        std::cout<<"Initial principal was "<<principal<<std::endl<<"The return value after "<<years<<"years"<<
        "is"<<returnvalue<<std::endl;
    }
   Bankdeposit (){}
    Bankdeposit(int p,int r ,int y);
    Bankdeposit(int p,float R,int y);
};
Bankdeposit::Bankdeposit(int p,int r,int y){
    principal=p;
     returnvalue=principal;
    years=y;
    interest=(float(r)/(100.0));
    for(int i=0;i<y;i++){
    returnvalue=returnvalue*(interest+1);}
}
Bankdeposit::Bankdeposit(int p,float R,int y){
    principal=p;
     returnvalue=principal;
interest=R;
    years=y;
     for(int i=0;i<y;i++){
    returnvalue=returnvalue*(interest+1);}

}
int main(){
    Bankdeposit a,b,c;
    int p,r,y;
    std::cout<<"Enter the value of p,r,y"<<std::endl;
    std::cin>>p>>r>>y;
  a=Bankdeposit(p,r,y);
    a.print();
    std::cout<<"Enter the valie of p,R,y"<<std::endl;
    int  p1,y1;
float R1;
    std::cin>>p1>>R1>>y1;
    b=Bankdeposit(p1,R1,y1);
    b.print();
    c.print();
return 0;}