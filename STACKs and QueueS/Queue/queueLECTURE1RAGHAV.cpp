#include <bits/stdc++.h>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << q.front() << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void reverseAqueue(queue<int> &q)
{
    stack<int> st;
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size())
    {
        q.push(st.top());
        st.pop();
    }
}
void reverseusingRECURSION(queue<int> &q)
{
    if (q.size() == 0)
        return;
    int x = q.front();
    q.pop();
    reverseusingRECURSION(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    display(q);
    reverseusingRECURSION(q);
    display(q);
    return 0;
}