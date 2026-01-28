1st

class Solution {
public:
    double Pow(double x, int  n){
        
        if (n == 0)return 1;
        if (n % 2 == 0){
            return Pow(x*x,n/2);
        }
        else{
            return x * Pow(x*x , n/2);
        }

    }
    double myPow(double x, int n) {
        if (n < 0){
            return 1.0/Pow(x,n);
        }
        return Pow(x,n);
    }
};

BEST APPROACH
    double myPow(double x, int n) {
        
    if (n < 0) x = 1.0 / x;
    double result = 1;
    int temp = n;
    while (n != 0){
        if (n % 2 != 0 )
            result = result * x; 
        x = x * x;
        n = n /2;
    }
    return result;}      T.C=log base2 (n) or  (log(n))          S.C-O(1)





2nd 
 double myPow(double x, int n) {
       return pow(x,n);
    }



3rd brute force tle 
 double myPow(double x, int n) {

    double result=1;
     for (size_t i=1 ;i <= abs(n); i++){
        result=result*x;
       }
    
    if (n < 0){
        return 1.0/result;
    }
return result;}
};


