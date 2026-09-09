 #include <iostream>
 using namespace std;
 void sort012(int a[], int n)
    {
  int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) zero++;
        else if(a[i]==1) one ++;
        else two++;
    }
    for(int i=0;i<zero;i++){
        a[i]=0;
    }
    for(int i=zero;i<one+two;i++){
        a[i]=1;
    }
    for(int i=one+two;i<n;i++){
        a[i]=2;
        
        
    }
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}