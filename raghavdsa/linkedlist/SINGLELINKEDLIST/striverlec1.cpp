#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};
int main()
{
    vector<int> arr = {2, 5, 6, 7};
    Node *y = new Node(arr[0], nullptr);
    cout << y << endl;       // OUTPUT: 0x1076d88
    cout << y->data << endl; // output:2
    Node x = Node(arr[1], nullptr);
    cout << x.data << endl; // 5
    cout << x.next;         // 0
}