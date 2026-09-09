#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    int aa = a, bb = b;
    int x = 1;
    int l = 0;
    while (1)
    {
        a = aa, b = bb;
        if (a > b)
        {
            a = a * x;
            if (a % b == 0)
            {
                l = a;
                break;
            }
        }
        if (b > a)
        {
            b = b * x;
            if (b % a == 0)
            {
                l = b;
                break;
            }
        }
        x++;
    }
    return l;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}