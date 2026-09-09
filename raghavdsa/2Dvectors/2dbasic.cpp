#include <bits/stdc++.h>
using namespace std;
int main(){
//  vector<int>v1;
//  v1.push_back(2);
//  v1.push_back(3);
//  vector<int>v2;
//  v2.push_back(1);
//  v2.push_back(2);
//  vector<int>v3;
//  v3.push_back(3);
//  v3.push_back(2);

//  vector<vector<int>>v;
//  v.push_back(v1);
//  v.push_back(v2);
//  v.push_back(v3);

//  for(int i=0;i<3;i++){
//     for(int j=0;j<2;j++){
//         cout<<v[i][j]<<"  ";
//     }cout<<endl;
//  }
vector<vector<int>>v(2,vector<int>(3,5));

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";}cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[2].size()<<endl;
 return 0;}