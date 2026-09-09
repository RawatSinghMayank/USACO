 #include <iostream>

using namespace std;

int main() {
 int a,b;

   std::cin>>a>>b;
   for( a;a<=b;a++){
     if(a==1){
       cout<<"one\n";}
   else if(a==2){cout<<"two\n";}
        else if(a==3){cout<<"three\n";}
             else if(a==4){cout<<"four\n";}
              else if(a==5){ cout<<"five\n";}
              else if(a==6){ cout<<"six\n";}
                  else if(a==7){cout<<"seven\n";}
                     else if(a==8){cout<<"eight\n";}
                     else if(a==9) { cout<<"nine\n";}
   
      if(a>9 && a%2==0){
     std::cout<<"even\n";}
     if(a>9 && a%2!=0){
       std::cout<<"odd\n";
     }
   }
 return 0;}
  