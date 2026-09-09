// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
  
//     for(int i=0;i<n-1;i++){    bool flag=false;
//         for(int j=0;j<n-1-i;j++){
// if(arr[j]>arr[j+1]){
//     flag=true;
//     int temp=arr[j];
//     arr[j]=arr[j+1];
//     arr[j+1]=temp;
// }

//         }if(flag==false)
//         break;
//     }
//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include <bits/stdc++.h>
// #include <climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// for(int i=0;i<n-1;i++){
// int min=INT_MAX;
// int minindex=-1;
// for(int j=i;j<n;j++){
// if(arr[j]<min){
//     min=arr[j];
//     minindex=j;
// }
// }
// swap(arr[i],arr[minindex]);
// }




//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
  
// }

#include <bits/stdc++.h>
#include <climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

for(int i=1;i<n;i++){
    int j=i;
while(j>=1 && arr[j]<arr[j-1]){
    swap(arr[j],arr[j-1]);
j--;
}
}



       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
}