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
 cout<<"enter the number of rows and coulmns in second matrix"<<endl;
 int n3,n4;
 cin>>n3>>n4;
 int arr2[n3][n4];
 cout<<"enter the elements in matrix two"<<endl;
 for(int i=0;i<n3;i++){
    for(int j=0;j<n4;j++){
        cin>>arr2[i][j];}}
       
       int sum=0;
       int arr3[n1][n4]={0};
       if(n2==n3){
        cout<<"matrix  multiplication possible"<<endl;
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<n4;j++){

                for(int k=0;k<n2;k++){
                    arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
                }
            }
        }  cout<<"final array is  "<<endl;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n4;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
       }
       else { cout<<"multiplication not possible"<<endl;
       }
       return 0;}
