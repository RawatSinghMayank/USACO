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
    for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cout<<arr1[i][j]<<" ";
    } cout<<endl;}
    cout<<endl;
    cout<<"enter the first coordinates"<<endl;
    int l1,r1;
    cin>>l1>>r1;
    cout<<"enter the second coordinates"<<endl;
    int l2,r2;
cin>>l2>>r2;
int sum=0;
for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
sum=sum+arr1[i][j];
    }
}
cout<<"sum of box is"<<sum;
 }
