#include <iostream>
int main(){
    int n;
    std::cin>>n; // sum of 1-2+3-4+5-6+7....n
    int sum=0;
    int a=1;
    while(a<=n){
        if(a%2==0){
            sum=sum-a;
        }
        else{
            sum=sum+a;
        }
        a++;
        }std::cout<<"sum is "<<sum;

        return 0;}