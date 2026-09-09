#include<bits/stdc++.h>
using namespace std;
void replace(char s[],char c1,char c2){
    if(s[0]=='\0')return ;
    if(s[0]==c1){
        s[0]=c2;
    }    
    replace(s+1,c1,c2);
}
int main()
{
    char str[1000];
    cin>>str;
    cout<<"Enter c1 and c2"<<endl;
    char c1,c2;
    cin>>c1>>c2;
    replace(str,c1,c2);
    cout<<str<<endl;
return 0;
}