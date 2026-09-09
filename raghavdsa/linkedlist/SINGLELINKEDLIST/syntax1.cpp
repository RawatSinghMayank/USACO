#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a;
    a.val = 1;
    Node b;
    b.val = 2;
    Node c;
    c.val = 3;
    Node d;
    d.val = 4;
    cout << a.val << endl // 1
         << b.val << endl // 2
         << c.val << endl // 3
         << d.val;        // 4
}
