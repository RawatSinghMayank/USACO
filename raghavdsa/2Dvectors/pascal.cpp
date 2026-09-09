#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<vector<int>>v;
        for(int i=1;i<=n;i++){
            vector<int> x(i);
            v.push_back(x);}
            for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) v[i][j]=1;
                else v[i][j]=v[i-1][j]+v[i-1][j-1];

            }
    }
    return v[n-1];

}
int main(){
int n;
cin>>n;
 vector<int>v=getRow(n);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}

