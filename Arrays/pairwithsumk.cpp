#include <iostream>
using namespace std;

    int Countpair(int arr[], int n, int sum){
        
    int i=0,j=n-1,k=0,c=0;

    while(i<j){
        k=arr[i]+arr[j];
        if(k==sum){
            c++;
            cout<<arr[i]<<","<<arr[j]<<endl;
            i++;
            j--;
    
        } else if(k>sum){
            j--;
        } else { i++;}
    }
    if(c==0) return -1;
    else return c;
        
    }
int main(){
    int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}cout<<"enter k "<<endl;
int k;
cin>>k;
cout<<Countpair(arr,n,k);
}

