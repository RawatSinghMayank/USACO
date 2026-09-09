#include<bits/stdc++.h>
using namespace std;
int sum(int n){
if(n<10)return n;
return n%10+sum(n/10);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
return 0;
}

/*In each call, the function divides n by 10.
The number of times you can divide n by 10 until it reaches 0 is approximately equal to the number of digits in n, which is log10(n).
Therefore, the number of recursive calls made is proportional to the number of digits in n, leading to a time complexity of O(log n).
Auxiliary Space
The auxiliary space of this function is O(log n).    log base 10 here

Reasoning:

Each recursive call adds a new frame to the call stack.
Since there are O(log n) recursive calls, the maximum depth of the call stack will be O(log n).
Therefore, the auxiliary space used by the call stack is O(log n).*/