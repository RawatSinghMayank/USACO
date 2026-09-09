// #include <iostream>
// using namespace std;
// int hcf(int a,int b){
//     int min=0;
//     if(a==0 || b==0){
//         return (a+b);}
// if(a<b){
//     min=a;
// }
// else { min=b;
// }
// while(min>0){
//     if(a%min==0 && b%min==0)
//     {
//     break;
//     }
//     min--;
// }
// return min;
// }
// #include <iostream>
//     using namespace std;
// int hcf(int a,int b);
// int main(){


// int a,b; 
// cin>>a>>b;
// cout<<"hcf of "<<a<<" and "<<b<<" is "<<hcf(a,b);
// return 0;}
// int hcf(int a,int b){
//     if(a==0 ){
//         return b;
//     }
//     if(b==0){

//         return a;
//     }
//     if(a==b){
//         return a;
//     }
//     if(a>b){
//         if(a%b==0){
//             return b;}
//             else {
//     return     hcf(a-b,b);
//                 }    }
//     else {
//         if(b%a==0){
//             return a;}
//             else {
//         return hcf(a,b-a);}

//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"ans is "<<hcf(a,b);
// }
// #include<iostream>
// using namespace std;
// int hcf(int a,int b);
// int main(){
// int a,b;

// cin>>a>>b;
// cout<<"ans is "<<hcf(a,b);
// return 0;}
// int hcf(int a,int b){
// int min=0,result=0;
// if(a>b){
//     min=b;
// }
// else min=a;
// if(a==0){
//     return b;
// }
// else if(b==0){
//     return a;
// }
// else {
//     for(int i=1;i<=min;i++){
//         if(a%i==0 && b%i==0){
//             result =i;
//         }
//     }
//     return result;}
// }
// #include <iostream>
// int hcf(int a,int b){
//     return b==0?a:hcf(b,a%b);
// }
// int main(){
//     int a,b;
//     std::cin>>a>>b;
//     std::cout<<"ans is "<<hcf(a,b);
// }
#include <iostream>
int hcf(int a,int b){
 while(a>0 &&  b>0){
    if(a>b){
        a=a%b;
    }
    else { b=b%a;
    }
 }
     if(a==0)
{
    return b;
} 
else 
 return a;}

// int main(){
//     int a,b;
//     std::cin>>a>>b;
//     std::cout<<"ans is "<<hcf(a,b);
//     return 0;}
#include  <iostream>
int gcd(int a,int b){
    if(a==0){
        return b;}
        else {
            return gcd(b%a,a);}
}
int main(){
int a,b;
std::cin>>a>>b;
std::cout<<"ans is "<<gcd(a,b);
}
