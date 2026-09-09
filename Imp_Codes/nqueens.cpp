#include<bits/stdc++.h>
using namespace std;
bool check(int row,int col,vector<vector<char>>&c,int n){
for(int i=row-1;i>=0;i--){
    if(c[i][col]=='Q')return false;
}
for(int i=row-1,j=col-1;i>=0 &&j>=0;i--,j--){
    if(c[i][j]=='Q')return false;
}
for(int i=row-1,j=col+1;i>=0 &&j<n;i--,j++){
    if(c[i][j]=='Q')return false;
}
return true;
}
void sett(int row,int n,vector<vector<char>>&c,vector<vector<string>>&v){
    if(row==n){
        vector<string>nigga;
    for(int i=0;i<n;i++){
        string str="";
        for(int j=0;j<n;j++){
            str+=c[i][j];
        }
        nigga.push_back(str);
    }    
v.push_back(nigga);
return;
    }
    for(int col=0;col<n;col++){
        if(check(row,col,c,n)){
            c[row][col]='Q';
            sett(row+1,n,c,v);
            c[row][col]='.';
        }
    }
}
int main(){
 int n;
 cin>>n;
        vector<vector<string>>v;
        vector<vector<char>>store(n,vector<char>(n,'.'));
    sett(0,n,store,v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
return 0;}
