    pair<int, int> get(int a, int b){
    
        pair<int,int>result;
        a=a^b;
        b=a^b;
        a=a^b;
        result.first=a,result.second=b;
        return result;
    }

//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
       pair<int,int>result;
       a=a+b;
        b=a-b;
        a=a-b;
       result.first=a;
       result.second=b;
       return result;
        
    }
};