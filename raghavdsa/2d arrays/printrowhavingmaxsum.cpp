#include <iostream>
int main(){
  using namespace std;
  cout<<"enter m and n"<<endl;
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
  int b[m];
  int sum=0;
     for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
sum=sum+arr[i][j];
    }
    b[i]=sum;
    cout<<"sum of "<<i+1<<"row is "<<sum<<endl;
    sum=0;
     }
     int c=0;
    int max=b[0];
    for(int i=0;i<m;i++){
        if(b[i]>max){
        c=i;
        }
    }
    cout<<"row with maximum sum is "<<c+1<<endl;
}
