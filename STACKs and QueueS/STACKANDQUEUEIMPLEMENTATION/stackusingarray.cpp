#include <iostream>
using namespace std;

class myStack {
    
    // array to store elements
    int *arr;       
    
    // maximum size of stack
    int capacity;   
    
    // index of index element
    int index;        

public:

    // constructor
    myStack(int cap) {
        capacity = cap;
        arr = new int[capacity];
        index = -1;
    }

    // push operation
    void push(int x) {
        if (index == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++index] = x;
    }

    // pop operation
    void pop() {
        if (index == -1) {
            cout << "Stack Underflow\n";
        }
        index--;
    }

    // index (or index) operation
    int top() {
        if (index == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[index];
    }

    // check if stack is empty
    bool isEmpty() {
        return index == -1;
    }

    // check if stack is full
    bool isFull() {
        return index == capacity - 1;
    }
};

int main() {
    myStack st(4);

    // pushing elements
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // popping one element
    

    // checking index element
    cout << "Top element: " << st.top() << "\n";

    // checking if stack is empty
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << "\n";

    // checking if stack is full
    cout << "Is stack full: " << (st.isFull() ? "Yes" : "No") << "\n";

    return 0;
}