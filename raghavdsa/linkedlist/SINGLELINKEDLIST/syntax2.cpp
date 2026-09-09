#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int a)
    {
        val = a;
        this->next = NULL;
    }
};
int main()
{
    Node a(9);

    Node b(10);

    Node c(3);

    Node d(30);
    a.next = &b;
    b.next = &c;
    c.next = &d;

    cout << a.val << endl  // 9
         << b.val << endl  // 10
         << c.val << endl  // 3
         << d.val << endl; // 30

    cout << a.next->val << endl; //  10
    cout << b.next->val << endl; // 3
    cout << "******" << endl;
    cout << (((a.next)->next)->next)->val << endl; // 39

    return 0;
}
