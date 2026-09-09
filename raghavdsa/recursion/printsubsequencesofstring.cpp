#include<bits/stdc++.h>
using  namespace std;
void print(string s,string n,int idx){
if(idx>=s.length()){
    cout<<"->"<<n<<endl;
    return ;}
  // method 1   // print(s,n,idx+1);
    // n.push_back(s[idx]);
    // print(s,n,idx+1);

    //method 2:
    n.push_back(s[idx]);
    print(s,n,idx+1);
    n.pop_back();
    print(s,n,idx+1);

}
int main(){
    string s="abc";
    string n="";
    int idx=0;
    print(s,n,idx);
}