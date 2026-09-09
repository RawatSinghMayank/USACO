// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter n"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"printing array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int arr1[n];
//     for(int i=0;i<n;i++){
//         arr1[i]=arr[n-i-1];
//     }
//     cout<<"printing reversed array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     int c=0;
//     for(int i=0;i<n;i++){
//         if(arr1[i]==arr[i]){
//             c++;
//         }
//     }
//     if(c==n){
//         cout<<"palidnrome array"<<endl;
//     }
//     else {cout<<"not a palindrome array"<<endl;
//     }
// }
        

      #include <iostream>
      using namespace std;
      void palid(int arr[],int n){
   int c=0;
   for(int i=0;i<=n/2 && n!=0;i++){
     if(arr[i]!=arr[n-i-1])
     {
        c++;
        break;
     }
   }
   if(c==1){
    cout<<"not a palindrome array"<<endl;
   }
   else { cout<<"palindrome array"<<endl;
   }
      }
   


      
      int main(){
        cout<<"enter n"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 palid(arr,n);}
    
