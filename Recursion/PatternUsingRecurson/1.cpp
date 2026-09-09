#include<bits/stdc++.h>
using namespace std;
void Pattern1(int row,int col){
if(row==0)return;
if(col<row){
    cout<<" * ";
    Pattern1(row,col+1);
}
else{
    cout<<endl;                       
    Pattern1(row-1,0);
}
}
/*    *  *  *  *  * 
      *  *  *  * 
      *  *  * 
      *  * 
      * 
*/ 

void Pattern2(int row,int col){
if(row==0)return;

}
int main()
{
    cout<<"Enter number of rows : "<<endl;
    int n;
    cin>>n;
    Pattern2();
return 0;
}