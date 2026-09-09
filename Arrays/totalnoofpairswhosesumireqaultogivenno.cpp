// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter no"<<endl;
//     int x;
//     cin>>x;
//     int sum=0;
// int c=0;
// cout<<"pairs are"<<endl;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             sum=0;
// sum=arr[i]+arr[j];
// if(sum==x){
// cout<<arr[i]<<","<<arr[j]<<endl;
// c++;
// }
//         }
//     }
//     cout<<"total no of pairs are:"<<c;
// }



#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter no"<<endl;
    int x;
    cin>>x;
    int sum=0;
int c=0;
cout<<"triplets  are"<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            sum=0;
sum=arr[i]+arr[j]+arr[k];
if(sum==x){
cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
c++;
}
        }
    }}
    cout<<"total no of triplets  are:"<<c;

}
