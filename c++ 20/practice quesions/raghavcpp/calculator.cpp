#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
char ch;
cin>>ch;
cin>>b;

switch(ch){
    case '+':{
    cout<<"additon "<<a+b<<endl;
break; }

case '-':{
    if(a>b){
        cout<<"sub"<<a-b<<endl;
    }
    else cout<<"sub"<<b-a<<endl;
break;}
case '*':{
    cout<<"mul"<<a*b<<endl;
break;}
case '/':{
    cout<<"div"<<(a/b)<<endl;
break;}
}
}