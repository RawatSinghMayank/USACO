 #include<bits/stdc++.h>
 using namespace std;
 string me(string num1,string num2){
     int n1=num1.length();
         int n2=num2.length();
        vector<int>v1(n1);
        vector<int>v2(n2);
        for(int i=0;i<n1;i++){
            v1[i]=num1[i]-'0';
        
        }
        for(int i=0;i<n2;i++){
            v2[i]=num2[i]-'0';
        }
        
        int carry=0;
        int total=0;       
        int max=0;
        int min=0;
        if(n1>n2)
        {max=n1;
        min=n2;}
        else {max=n2;
             min=n1;}
        vector<int>v3;
        for(int i=0;i<max;i++){
            if(i<min){
            total=carry+v1[n1-1-i]+v2[n2-i-1];}
          else {  total=carry+v1[n1-1-i];}
            if(total<=9){
                v3.push_back(total);
            carry=0;}
            else {
                v3.push_back(total%10);
                carry=total/10;
            }
            }

        reverse(v3.begin(),v3.end());
        
 }
 int main(){
    string s1="456";
    string s2="77";
    me(s1,s2);
 }