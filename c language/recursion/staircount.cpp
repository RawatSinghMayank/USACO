
// single step + double step

// #include <iostream>
// int stair(int n){
//     if(n==1 || n==2 ){
//         return  n;
//     }
//     else {
//         return stair(n-2)+stair(n-1);
//     }
// }
// int main(){
//     int n;
// std::cin>>n;
// std::cout<<stair(n);
// } 
#include <iostream>
using namespace std;

int steps1 (int n){
if(n==1 || n==2 ){

    return n;}
    if(n==3){
      return 4;}
  
  else { return steps1(n-1) + steps1(n-2)+steps1(n-3);}
}

int main(){
    int n;
    cin>>n;
    cout<<steps1(n);
}