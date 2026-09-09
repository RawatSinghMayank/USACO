#include <bits/stdc++.h>
using namespace std;
void push(queue<int> &q1, int x) { q1.push(x); }
void display(queue<int> q1)
{
    int n = q1.size();
    for (int i = 0; i < n; i++)
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}
int pop(queue<int> &q1, queue<int> &q2)
{
    if (q1.empty())

        cout << "Stack is empty";

    while (q1.size() > 1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int x = q1.front();
    q1.pop();
    swap(q1, q2);
    return x;
}

int main()
{
    queue<int> q1;
    queue<int> q2;
    push(q1, 10);
    push(q1, 20);
    push(q1, 30);
    push(q1, 40);
    display(q1);
    cout << "The poped element is " << pop(q1, q2) << endl;
    cout << pop(q1, q2) << endl;
    cout << endl;
    display(q1);
    return 0;
}