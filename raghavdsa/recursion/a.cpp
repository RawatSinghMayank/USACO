// #include<stdio.h>
// void sort(int arr[], int n){
//     int *p=arr;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//          if(*(p+j)>*(p+j+1)){
//             int temp=*(p+j);
//             *(p+j)=*(p+j+1);
//             *(p+j+1)=temp;
//          }
//         }
//     }
//     return ;}
// void intersection(int arr1[],int arr2[],int m,int n){
// sort(arr1,m);
// sort(arr2,n);

// int *p=arr1;
// int *q=arr2;
// int i=0;
// int j=0;
// while(i<m && j<n){
//     if(*(p+i)<*(q+j))i++;
//     else if(*(p+i)>*(q+j))j++;
//     else {

//         printf("%d ",*(p+i));
//         i++;
//         j++;
//     }
// }
// return ;}
// int main(){
//     printf("Enter size of array 1 ");
//     int m,n;
//     scanf("%d",&m);
//      printf("Enter size of array 2 ");
//          scanf("%d",&n);
//     int arr1[m];
//     int arr2[n];
//     printf("\nEnter the elements in  array one ");
//     for(int i=0;i<m;i++){
//         scanf("%d",&arr1[i]);
//     }
//      printf("\nEnter the elements in array two ");
//     for(int j=0;j<n;j++){
//         scanf("%d",&arr2[j]);
//     }
//    intersection(arr1,arr2,m,n);
// return 0;}


#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={1,10,9,4,22};
        int n=sizeof(arr)/sizeof(arr[0]);
        // vector<int>v(arr,arr+n);
        // for(int i=0;i<v.size();i++)
        // cout<<v[i]<<endl;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

}