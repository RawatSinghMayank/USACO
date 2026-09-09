class myQueue {
private:
    int cap;
    Node* front;
    Node* rear;

public:
    myQueue() {
        front = rear = nullptr;
        cap = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);

        if (isEmpty()) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }

        cap++;
    }

    void dequeue() {
        if (isEmpty()) {
            return;
        }

        Node* toDelete = front;

        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
        }

        delete toDelete;
        cap--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return front->data;
    }

    int getRear() {
        if (isEmpty()) return -1;
        return rear->data;
    }

    int size() {
        return cap;
    }

    ~myQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};


~myQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

👉 This is a destructor.

💡 What is a Destructor?
A destructor is a special function that:
Has same name as class with ~
Is called automatically when object is destroyed

Example:

myQueue q;   // object created

// when q goes out of scope → destructor is called automatically
⚠️ Why do we need it here?

Your queue uses dynamic memory:

Node* temp = new Node(x);

👉 Every new must have a corresponding delete

Otherwise:
❌ Memory leak

🔁 What this destructor does
while (!isEmpty()) {
    dequeue();
}

Step by step:

While queue is NOT empty
Keep calling dequeue()
Each dequeue():
Deletes one node
Eventually queue becomes empty

👉 So all allocated memory is freed ✅
