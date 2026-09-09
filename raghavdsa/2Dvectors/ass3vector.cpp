#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int a=0;
    int b=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
            a=i;
            b=j;
            break;
            }}}    
            for(int i=0;i<n;i++){
                arr[a][i]=0;}
                for(int i=0;i<m;i++){
                    arr[i][b]=0;}

                    for(int i=0;i<m;i++){
                        for(int j=0;j<n;j++){
                            cout<<arr[i][j]<<" ";
                        }cout<<endl;
                    }
                    return 0;}