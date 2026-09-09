#include<iostream>
 using namespace std;
 int main(){
 cout<<"enter the number of rows and columns in first matrix"<<endl;
 int n1,n2;
 cin>>n1>>n2;
 int arr1[n1][n2];
 cout<<"enter the elements"<<endl;
 for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cin>>arr1[i][j];
    } }
    cout<<"original array"<<endl;
    for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cout<<arr1[i][j]<<" ";
    }cout<<endl; }
 
int arr2[n2][n1];

for(int i=0;i<n2;i++){
    for(int j=0;j<n1;j++){
        arr2[i][j]=arr1[j][i];
    }
}
cout<<"printing transpose "<<endl;
 for(int i=0;i<n2;i++){
    for(int j=0;j<n1;j++){
        cout<<arr2[i][j]<<" ";
    }cout<<endl; }
    return 0;}
 
