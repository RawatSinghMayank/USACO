// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter no of elements in the array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];}
//         int arr1[n+1];
//         cout<<"enter the position and the element"<<endl;
//         int pos,k;
//         cin>>pos>>k;
//         for(int i=0;i<pos-1;i++){
//             arr1[i]=arr[i];
//         }


//         for(int i=pos-1;i<n;i++){
//             arr1[i+1]=arr[i];

//         }
//      arr1[pos-1]=k;
//      for(int i=0;i<=n;i++){
//         cout<<arr1[i]<<" ";
//      }
//      return 0;}

#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no of elements in the array"<<endl;
    int n;
    cin>>n;
    int arr[n+1];
    cout<<"enter elemenets"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        cout<<"enter pos and element"<<endl;
        int pos,k;
        cin>>pos>>k;
        for(int i=n;i>=pos;i--){
            arr[i]=arr[i-1];}
            arr[pos-1]=k;
            for(int i=0;i<=n;i++){
                cout<<arr[i]<<"  ";
            }
}