#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int val, Node*previous, Node*ahead) {
        this->val =val;
        this->next = ahead;
        this->prev = previous;
    }
};

class MyLinkedList {
private:
    Node* head;

public:
    MyLinkedList() {
        head = nullptr;
    }

    Node* arrayToDoublyLinkedList(vector<int>& nums) {

       head = new Node(nums[0]);
       Node* temp = head;
        for (int i = 1; i < nums.size(); i++) {
            Node* ahead = new Node(nums[i]);
            temp->next = ahead;
            ahead->prev = temp;
            temp = temp->next;
        }
        
        return head;
    }

    void print() {

        Node*temp = head;
        Node*tail = nullptr;
        cout << "forward traversal" << endl;
        while(temp != nullptr) {
            cout << temp->val << " ";
            tail = temp;
            temp = temp->next;
        }
        
        cout << endl;
        temp = tail;
        cout << "backward traversal " << endl;
        while (temp != nullptr){
            cout << temp->val << " ";
            temp = temp->prev;
        }

        cout << endl;

    }

    Node *deleteHead(Node *head) {
    
        if (head == nullptr) return nullptr;
        
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }
        
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        return head;   
    }
    
    ~MyLinkedList() {
        Node*temp = head;
        while (head != nullptr) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
};

int main(){ 

    vector<int> nums = {1,2,3,4,5};
    MyLinkedList list;
    Node* head = list.arrayToDoublyLinkedList(nums);

    list.print();
    return 0;
}
