#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void getvaluesback()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << endl
         << " checking values" << endl;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
}
void printinreverseorder()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> stt;
    while (st.size() > 0)
    {
        stt.push(st.top());
        st.pop();
    }
    while (stt.size() > 0)
    {
        cout << stt.top() << " ";
        stt.pop();
    }
}
void print(stack<int> st)
{
    while (st.size() > 0)
    {
        cout << st.top() << "   ";
        st.pop();
    }
    cout << endl;
}
void reverseaStack(stack<int> &st)
{
    stack<int> one;
    stack<int> two;
    while (st.size() > 0)
    {
        one.push(st.top());
        st.pop();
    }
    while (one.size() > 0)
    {
        two.push(one.top());
        one.pop();
    }
    while (two.size() > 0)
    {
        st.push(two.top());
        two.pop();
    }
}
void reverseaStackusingarray(stack<int> &st)
{
    vector<int> arr;
    while (st.size() > 0)
    {
        arr.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < arr.size(); i++)
    {
        st.push(arr[i]);
    }
}
void pushelementatbottom(int ele, stack<int> &st)
{
    stack<int> s;
    while (st.size() > 0)
    {
        s.push(st.top());
        st.pop();
    }
    st.push(ele);
    while (s.size() > 0)
    {
        st.push(s.top());
        s.pop();
    }
}
void insertAtaparticularindex(int ele, int idx, stack<int> &st)
{
    stack<int> s;
    int n = st.size();
    while (st.size() > idx)
    {
        s.push(st.top());
        st.pop();
    }
    st.push(ele);
    while (s.size() > 0)
    {
        st.push(s.top());
        s.pop();
    }
}
void displaystackusingrecursion(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displaystackusingrecursion(st);
    cout << x << "  ";
    st.push(x);
}
void pushatbottomusingrecursion(stack<int> &st, int ele)
{
    if (st.size() == 0)
    {
        st.push(ele);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottomusingrecursion(st, ele);
    st.push(x);
}
void reverseusingrec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    reverseusingrec(st);
    pushatbottomusingrecursion(st, x);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    int ele = 99;
    //  displaystackusingrecursion(st);
    // cout << "displaying after recursion" << endl;
    print(st);
    cout << endl;
    reverseusingrec(st);
    print(st);
    // printinreverseorder();
    return 0;
}