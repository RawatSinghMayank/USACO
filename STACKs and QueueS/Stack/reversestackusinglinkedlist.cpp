#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int val;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class Stack
{
public:
    Node *head;
    Stack()
    {
        head = NULL;
    }

    void rev(stack<int> &St)
    {
        while (St.size())
        {
            Node *temp = new Node(St.top());
            if (head == NULL)
            {
                head = temp;
            }
            else
            {
                temp->next = head;
                head = temp;
            }
            St.pop();
        }
    }

    void g(stack<int> &St)
    {

        Node *p = NULL;
        Node *temp = head;
        while (temp)
        {
            Node *f = temp->next;
            temp->next = p;
            p = temp;
            temp = f;
        }
        while (p)
        {
            St.push(p->val);

            p = p->next;
        }
    }
};

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(393939);
    Stack St;
    St.rev(st);
    St.g(st);
    while (st.size())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}