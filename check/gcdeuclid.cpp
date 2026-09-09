#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
       int n1=num1.length();
        int n2=num2.length();
        int min=0;int max=0;
    if(n1>n2){min=n2;
max=n1;}
        else { max=n2;
              min=n1;
             }
        vector<int>first(n1);
        vector<int>second(n2);
        for(int i =0;i<n1;i++){
            first[i]=(int)(num1[i]-48);
        }
        for(int i=0;i<n2;i++){
            second[i]=(int)(num2[i]-48);
        }
        int carry=0;
        int sum=0;
        vector<vector<int>>two;
int count=0;
        reverse(second.begin(),second.end());
        for(int j=1;j<=min;j++){    vector<int>one;
   sum=0,carry=0;count++;
         for(int i=0;i<max;i++){
       sum=carry+first[n1-i-1]*second[j-1];
             if(sum<=9){one.push_back(sum);
             carry=0;}
               else  {one.push_back(sum%10);
                 carry=sum/10;}
             
          
         }
 reverse(one.begin(),one.end());   
 if(count>1){
for(int z=0;z<count-1;z++)
one.push_back(0);}
            two.push_back(one);
        }
        int xx=two[0].size();
        vector<int>vv;
        int carry=0;
        int sum=0;
    
        for(int i=0;i<two.size();i++){
            int i=x-1;
            int j=xx;
            while(i>=0 || j>=0){
                if(i>=){
                    sum=sum+carry+two[i]]




}


        
        

int main(){

string num1="123";
string num2="456";
multiply(num1,num2);
}
