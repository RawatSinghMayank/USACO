#include <iostream>
using namespace std;
int find(int arr[],int n,int k){

    int b[100];
    int c=1;
    for(int i=0;i<n;i++){
       c=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[j]==arr[i]){
                    c++;
                    arr[j]=-1;
                }
                
            }{if(c%k!=0){
             return arr[i];
             }
        }
    }
 
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< find(arr,n,k);
  
    return 0;}
