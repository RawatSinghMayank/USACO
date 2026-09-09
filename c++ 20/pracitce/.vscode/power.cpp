#include <iostream>
using namespace std;

     
     class employee{

        private :
        int a,b,c;
        public :
        int d,e,f;

      void setdata(int a,int b,int c);
     
      void getdata(){
         cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
      }
     };
     int main(){
      employee mayank;
      employee pankaj;
      employee swati;
      
      mayank.setdata( 334,54,66);
      pankaj.d=34;
      swati.e=333;
      return 0;}