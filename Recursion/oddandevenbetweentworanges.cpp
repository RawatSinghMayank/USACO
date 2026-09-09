#include <bits/stdc++.h>
using namespace std;
void Oddbetween(int r1, int r2)
{
    if (r1 > r2)
        return;
    if (r1 % 2 == 1)
        cout << " " << r1;
    Oddbetween(r1 + 1, r2);
}
void EvenBetween(int r1, int r2)
{

    if (r1 > r2)
        return;
    if (r1 % 2 == 0)
        cout << " " << r1;
    EvenBetween(r1 + 1, r2);
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "Odd numbers between " << n1 << " and " << n2 << " are : ";
    Oddbetween(n1, n2);
    cout << endl;
    cout << "Even  numbers between " << n1 << " and " << n2 << " are : ";
    EvenBetween(n1, n2);
    return 0;
}