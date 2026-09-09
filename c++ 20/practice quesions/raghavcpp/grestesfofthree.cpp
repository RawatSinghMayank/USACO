#include <iostream>
int main(){
    using namespace std;
    int a,b,c;
    cin>>a>>b>>c;
//     if(a>b && a>c){
//         cout<<a<<endl;
//     }
//    else  if(b>a && b>c){
//        cout<<b;
//     }
//     else cout<<c;
if(a<b && a<c)cout<<a;
else if(b<c && b<a) cout<<b;
else cout<<c;
    return 0;}