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
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
        int max=arr[0][0];
         int min=arr[0][0];
          for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];}
                if(arr[i][j]<min){
                min=arr[i][j];
                }
        }
          }
          cout<<"max and min of matrix is "<<max<<" " <<min;
}
