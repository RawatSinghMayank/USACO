#include<bits/stdc++.h>
using namespace std;
int noofZeros(int n){
    if(n==0){
        return 0;
    }
   int  ans=noofZeros(n/10);
     if(n%10==0) return ans+1;
     return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<noofZeros(n);
return 0;
}