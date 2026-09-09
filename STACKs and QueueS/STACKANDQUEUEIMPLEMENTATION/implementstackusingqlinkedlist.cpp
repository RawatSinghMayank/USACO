class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class myStack {
    
  private:
  Node* top;
  int sizee;
  public:
    myStack() {
        // Initialize your data members
        top = nullptr;
        sizee = 0;
    }

    bool isEmpty() {
        return sizee==0;
        // check if the stack is empty
    }

    void push(int x) {
       
       Node *temp = new Node(x);
       temp->next = top;
       top = temp;
       sizee++;
        // Adds an element x at the top of the stack
    }

    void pop() {
       if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* toDelete = top;
        top = top->next;
        delete toDelete;
        sizee--;
    }

    int peek() {
        if (isEmpty()) return -1;
        return top->data;
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return sizee;
        // Returns the current size of the stack.
    }
};