#include <iostream>
#include <string>
using namespace std;
class binary{
    private:
    string s;
    public:
    void read(void);
    void check(void);
    void onescompliment(void);
    void display(void);
};
void binary:: read(void){
cout<<"enter the number "<<endl;
cin>>s;
}
void binary::check(void){
    for(int i=0 ;i<s.length();i++){
        if(s.at(i)!='0' || s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            cout<<s<<endl;
           
        }
    }
}
void binary::onescompliment(void){
    for(int j=0;j<s.length();j++){
        if(s.at(j)=='0'){
        s.at(j)='1';
    } 
    else {
        s.at(j)=1;}}}
        void binary:: display(void){
            cout<<"displaying the number after one compliment"<<endl;
            for(int x=0;x<s.length();x++){
                cout<<s.at(x);
                cout<<endl;
            }}
            int main(){
                binary mayank;
                mayank.read();
            mayank.check();
            mayank.display();
            mayank.onescompliment();
            mayank.display();
            return 0;}