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
    cout<<"printing array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
cout<<endl;
    } int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[j][i];
        }
        cout<<"sum of columns"<<i+1<<" is "<<sum<<endl;
 sum=0;   }


    
return 0;}
