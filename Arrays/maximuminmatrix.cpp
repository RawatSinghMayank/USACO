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
         int maxrow,maxcolumn,minrow,mincolumn;
          for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>=max){
                max=arr[i][j];
                maxrow=i;
                maxcolumn=j;
            }
                if(arr[i][j]<=min)
             {   min=arr[i][j];
              minrow=i;
              mincolumn=j;} 
            
        }}
    cout<<max<<"is at "<<maxrow<<","<<maxcolumn<<endl;
    cout<<min<<"is at "<<minrow<<","<<mincolumn<<endl;
    return 0;}

        