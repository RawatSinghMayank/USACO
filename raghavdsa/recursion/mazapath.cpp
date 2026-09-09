// #include<bits/stdc++.h>
// using namespace std;
// int maze(int sr, int sc,int er,int ec){
//     if(sr>er || sc>ec)return 0;
//     if(sr==er || sc==ec)return 1;
//     else {
//         int a=maze(sr+1,sc,er,ec);
//         int b=maze(sr,sc+1,er,ec);
//         return a+b;
//     }
// }
// int  main(){
//   cout<<maze(0,0,2,6);
// }
// #include<bits/stdc++.h>
// using namespace std;
// void  maze(int sr, int sc,int er,int ec,string s){
//     if(sr>er || sc>ec)return ;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;return ;}

//     else {
//         maze(sr+1,sc,er,ec,s+"D");
//         maze(sr,sc+1,er,ec,s+"R");
        
//     }
// }
// int  main(){
// maze(0,0,2,2,"");
// }



// with two variables
// #include<bits/stdc++.h>
// using namespace std;
// int   maze(int er,int ec){
//    if(er<0 || ec<0)return 0;
//    if(er==0 && ec==0 )return 1;

//     else {
//         int a=maze(er-1,ec);
//         int  b=maze(er,ec-1);
//         return a+b;
      
        
//     }
// }
// int  main(){
// cout<<maze(2,2);
// }
#include<bits/stdc++.h>
using namespace std;
void maze(int er,int ec,string s){
   if(er<0 || ec<0)return;
   if(er==0 && ec==0 ){
    cout<<s<<endl;return ;}

    else {
        maze(er-1,ec,s+"U");
        maze(er,ec-1,s+"L");

      
        
    }
}
int  main(){
maze(2,1,"");
}