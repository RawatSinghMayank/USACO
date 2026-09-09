#include<bits/stdc++.h>
using namespace std;
string remove(string str,string ans,char x){
    if(str.length()==0)return ans;
    if(str[0]!=x)
    return remove(str.substr(1) ,ans+str[0],x);
    else 
    return remove(str.substr(1),ans,x);
}

// 2nd method using only input string
string  remove2(string str,char x){
if(str.length()==0)return "";
if(str[0]==x)  return  remove2(str.substr(1),x);
else return str[0]+remove2(str.substr(1),x);

}
int main()  
{
    string str;
    cin>>str;
    char ch;
    cout<<"Enter x "<<endl;
    cin>>ch;
    string nig="";
    string ans=remove2(str,ch);z
    cout<<ans<<endl; 
return 0;
}