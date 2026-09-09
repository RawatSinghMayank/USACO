
#include<iostream>
int main(){
    using  namespace std;
  cout<<"enter m and n"<<endl;
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  int arr1[m][n];

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    arr1[i][j]=arr[i][j];   }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    arr[i][j]=arr1[j][i];
       }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }
}


