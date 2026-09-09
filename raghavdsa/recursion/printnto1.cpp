#include<bits/stdc++.h>
using namespace std;
void print(int n){
if(n==0)return ;
else {
    

 printf("%d ",n);print(n-1);
}
}
int main(){
print(10);
}