#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v(3,vector<int>(3,0));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }
    reverse(v.begin(),v.end());
    for(auto&it:v){
        for(auto &j:it){
            cout<<j<<" ";
        }cout<<endl;
    }

return 0;
}