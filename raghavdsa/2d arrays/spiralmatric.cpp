// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter no of rows and columns "<<endl;
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     cout<<"enter elements"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }3
//     }
//     int maxr=m-1;
//     int minr=0;
//     int maxc=n-1;
//     int minc=0;
//     int count=0;
//     int nof=m*n;

//     while(count<nof){
//         for(int j=minc;j<=maxc && count<nof;j++){
//             cout<<arr[minr][j]<<" ";
//             count++;}
//             minr++;
//             for(int i=minr;i<=maxr && count<nof;i++){
//                 cout<<arr[i][maxc]<<" ";
//                 count++;}
//                 maxc--;
//                 for(int j=maxc;j>=minc && count<nof;j--){
//                     cout<<arr[maxr][j]<<" ";count++;
//                 }
//                 maxr--;
//                 for(int i=maxr;i>=minr && count<nof;i--){
//              cout<<arr[i][minc]<<" ";
//              count++;}minc++;
             
//     }
// }




#include <iostream>
using namespace std;
int main(){
    cout<<"enter no of rows and columns "<<endl;
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int nof=m*n;
    int count=0;
    int a=1;

    while(count<nof){
for(int i=minc;i<=maxc;i++){
    arr[minr][i]=a++;
    count++;}
minr++;

for(int i=minr;i<=maxr && count<nof;i++){
    arr[i][maxc]=a++;
    count++;}
    maxc--;

for(int i=maxc;i>=minc && count<nof;i--){
    arr[maxr][i]=a++;
    count++;}
    maxr--;

for(int i=maxr;i>=minr && count<nof;i--){
    arr[i][minc]=a++;
    count++;}
    minc++;

    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
