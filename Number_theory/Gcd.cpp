 
//Naive appraoch:
int gcd(int a, int b) {
        int mini=min(a,b);
        for(int i=mini;i>=0;i--){
            if(a%i==0 and b%i==0)return i;
        }
    }