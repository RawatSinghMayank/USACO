#include <iostream>
using namespace std;
int main(){
 cout<<"enter no of rows and columsn "<<endl;
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    } 
    int p=0,s=0;
     for(int i=0;i<m;i++){
    
p=p+arr[i][i];
s=s+arr[i][n-i-1];
        }
     
     cout<<"sum of principal diagonals is "<<p<<endl<<"sum of secondary diagonals is "<<s;
}