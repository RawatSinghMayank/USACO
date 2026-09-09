// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // int main(){
// //     vector<int>v;
// //     v.push_back(6);
// //     v.push_back(6);
// //         v.push_back(6);
// //             v.push_back(6);

// //                 v.push_back(6);
// //                     v.push_back(6);
// //                         v.push_back(6);
// //                             v.push_back(6);

// //                             for(int i=0;i<v.size();i++){
// //                                 cout<<v[i]<<" ";
// //                             }
// //                             cout<<endl;
// //                             v.pop_back();
// //                             v.pop_back();
                            
// //  for(int i=0;i<v.size();i++){
// //                                 cout<<v[i]<<" ";
// //                             }
// //                             cout<<endl;
// //                             cout<<"size"<<v.size()<<endl;
// //                             cout<<v.capacity()<<endl;
// // }
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
// // vector <int>v;
// // for(int i=0;i<5;i++){
// //     int x;
// //     cin>>x;
// //     v.push_back(x);
// // }
// // for(int i=0;i<5;i++){
// //     cout<<v[i]<<" ";
// // }
// vector <int>v(10);
// for(int i=0;i<v.size();i++){
//     cin>>v[i];
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }}

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v(10);
for(int i=0;i<v.size();i++){
    cin>>v.at(i);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v.at(i);
}
}

