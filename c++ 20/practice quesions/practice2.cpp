// #include <iostream>
// int main(){
//   int max1,max2;
//   int a,b,c,d;
//   std::cin>>a;
//   std::cout<<std::endl;
//   std::cin>>b;
//   std::cout<<std::endl;
//   std::cin>>c;
//   std::cout<<std::endl;
//   std::cin>>d;
//   std::cout<<std::endl;
//   if(a>b){
//     max1=a;}
//     else max1=b;{
//   }
// if(c>d){max2=c;}
// else{max2=d;}
// if(max1>max2){
//   std::cout<<max1;
// }else if(max2>max1){std::cout<<max2;}
// else { std::cout<< max1;}
// return 0;}








// #include <iostream>
// int sum_of_four(int a,int b,int c,int d);
// int sum_of_four(int a,int b,int c,int d){

//   int max1,max2;

  
//   std::cin>>a;

//   std::cin>>b;

//   std::cin>>c;

//   std::cin>>d;

//   if(a>b){
//     max1=a;}
//     else{max1=b;
//   }
// if(c>d){max2=c;}
// else{max2=d;}
// if(max1>max2){
//   return max1;}
//   else{return max2;}}

// int main(){
// int a,b,c,d;
// std::cout<<sum_of_four(a,b,c,d);
//   return 0;
// }






#include <iostream>
void sum_of_four(int a,int b,int c,int d);
void sum_of_four(int a,int b,int c,int d){

  int max1,max2;

  
  std::cin>>a;

  std::cin>>b;

  std::cin>>c;

  std::cin>>d;

  if(a>b){
    max1=a;}
    else{max1=b;
  }
if(c>d){max2=c;}
else{max2=d;}
if(max1>max2){
  std::cout<< max1;}
  else{ std::cout<< max2;}}

int main(){

  int a,b,c,d;
sum_of_four(a,b,c,d);


  return 0;
}
