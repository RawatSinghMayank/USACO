#include <iostream>
#include<string>
#include<vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream str(s);
  string temp;
  vector<string>v;
  while(str>>temp){
  v.push_back(temp);
  }int c=1;
  int max1=1;
  sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1]){
        c++;
        if(max1>c)max1=max1;
        else  max1=c;
    }
    else c=1;
}c=1;
for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1])
            c++;  
              else c=1;

if(c==max1){
    cout<<v[i]<<" "<<max1<<endl;}}
return 0;}