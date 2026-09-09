#include<bits/stdc++.h>
using namespace std;
void removeX(char str[],char x){
if(str[0]=='\0'){
    return;
}
 if(str[0]==x){
    int i;
    for( i=0;str[i]!='\0';i++){
        str[i]=str[i+1];
    }
    str[i]='\0';
    removeX(str,x);  
 } 
 else {
    removeX(str+1,x);
 }
 
}

int length(char str[]){
if(str[0]=='\0')return 0;
int len=length(str+1);
return len+1;
}
int main()
{
    char str[100];
    cin>>str;
    cout<<length(str)<<endl;
    cout<<"Enter the value of x :"<<endl;
    char x;
    cin>>x;   
    removeX(str,x);
   cout<<str<<endl;
   cout<<length(str)<<endl;
return 0;
}