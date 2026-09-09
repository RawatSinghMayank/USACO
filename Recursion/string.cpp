#include<bits/stdc++.h>
using namespace std;
int main()
{
    string *str=new string;
   getline(cin,*str);
    cout<<*str<<endl;
    cout<<str->find("Mayank")<<endl;
    cout<<str->substr(3,4)<<endl;
return 0;
}