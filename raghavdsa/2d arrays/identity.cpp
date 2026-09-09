#include <iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }}
    bool flag=false;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j && arr[i][j]!=1){
           
            flag=true;
        break;}
        if(i!=j && arr[i][j]!=0){

            flag=true;
        break;}
    }
}
if(flag){  cout<<"not an identity matrix "<<endl;}
else 
cout<<"identity matrix "<<endl;
return 0;}
