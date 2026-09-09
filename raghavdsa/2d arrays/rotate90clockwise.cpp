#include <iostream>
using namespace std;
void swap(int *a,int *b){

    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
  cout<<"enter m and n"<<endl;
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){ 
        cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=i+1;j<n;j++){
        swap(arr[i][j],arr[j][i]);
    }}
for(int k=0;k<n;k++){
    int i=0;
    int j=n-1;
    while(i<=j){
  int temp=arr[k][i];
  arr[k][i]=arr[k][j];
  arr[k][j]=temp;i++,j--;}}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

  }

