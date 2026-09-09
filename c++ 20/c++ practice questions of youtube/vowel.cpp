// #include <iostream>
// int main(){
//     std::cout<<"enter alphabet of your choice"<<std::endl;
//     char ch;
//     std::cin>>ch;
//     if(std::isupper(ch)){
    
//         int a=ch;
//         if(a==65 || a==69 || a==73 || a==79 || a==85 ){
//             std::cout<<"the alphabet entered is vowel: "<<char(ch)<<std::endl;
//         }
//         else{
//         std::cout<<"the alphabet entered is consonent "<<char(ch)<<std::endl;
//         }
//     }
//     else{
       
//             int a=ch;
//             if(a==97 || a==101 || a==105 || a==111 || a==117){
//                 std::cout<<"the alphabet entered is vowel: "<<char(ch)<<std::endl;
//         }
//         else{
//         std::cout<<"the alphabet entered is consonent "<<char(ch)<<std::endl;
//         }
//     }
//     return 0;}
#include <iostream>
int main(){
  char ch;
    std::cin>>ch;
    switch (ch){
        
        case 'A':{
        std::cout<<"vowel:"<<ch;
        break;}
        case 'E':{
             std::cout<<"vowel:"<<ch;break;}
              case 'I':{
             std::cout<<"vowel:"<<ch;break;}
              case 'O':{
             std::cout<<"vowel:"<<ch;break;}
              case 'U':{
             std::cout<<"vowel:"<<ch;break;}
              case 'a':{
             std::cout<<"vowel:"<<ch;break;}
              case 'e':{
             std::cout<<"vowel:"<<ch;break;}
              case 'i':{
             std::cout<<"vowel:"<<ch;break;}
              case 'o':{
             std::cout<<"vowel:"<<ch;break;}
              case 'u':{
             std::cout<<"vowel:"<<ch;break;}
             default: {
                std::cout<<"consonent"<<ch;
                break;}
    }return 0;}