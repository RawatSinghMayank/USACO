int gcd(int a, int b) {
       for (int i=min(a,b); i>=1; i--){
           if ( a%i==0 and b%i==0)return i;
       }
       return 1;
    }
T.C-O(min(a,b))

 int gcd(int a, int b) {
       if (a == 0) return b; 
       else if (b == 0)return a;
       if (a > b) return gcd (a-b ,b);
       else return gcd (a, b-a);
    }


 int gcd(int a, int b) {
        
    while (a > 0 and b > 0 ){
        if (a > b) a = a - b;
        else b = b - a;
    }
    if (a == 0) return b;
    else return a;   
}

int gcd(int a, int b) {
        
    while (a > 0 and b > 0 ){
        if (a > b) a = a  % b;
        else b = b % a;
    }
    if (a == 0) return b;
    else return a;   

}


int gcd(int a, int b) {
        // code here
        if ( b == 0)return a;
        gcd (b,a%b);
}