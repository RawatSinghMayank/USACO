#include <iostream>

using namespace std;
int main(){
    
    int rev=0;

    int n;
    std::cin>>n;
    while(n>0)
{
    int nn=n%10;
rev=rev*10+nn;
    n=n/10;
}
std::cout<<rev;}