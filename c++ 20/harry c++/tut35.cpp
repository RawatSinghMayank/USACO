#include <iostream>
using namespace std;
int count=0;
class num{

public:
num(){
count++;
cout<<"This is the time when constructor is called for object"
<<count<<endl;
}
~num(){
    cout<<"this is time when destructor is called for object "<<
    count<<endl;
    count--;
}
};
int main(){
    cout<<"Entering main block"<<endl;
    cout<<"creating num 1 "<<endl;
    num n1;
    {
        cout<<"creating num 2 and num 3"<<endl;
        num n2;
        num n3;
        cout<<"exiting num 2 and num 3"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;}
